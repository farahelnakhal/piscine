/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_convert_base2.c                                :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fqussay <fqussay@stuydent.42abudhabi.ae>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/23 13:50:36 by fqussay          #+#    #+#              */
/*   Updated: 2026/06/24 09:59:51 by fqussay         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strlen_base(char *base);
int	skip_prefix(char *nbr, int *i);

int	to_int(char *nbr, char *base_from)
{
	int	base_len;
	int	sign;
	int	result;
	int	i;
	int	j;

	base_len = strlen_base(base_from);
	i = 0;
	sign = skip_prefix(nbr, &i);
	result = 0;
	while (nbr[i])
	{
		j = 0;
		while (j < base_len && base_from[j] != nbr[i])
			j++;
		if (j == base_len)
			break ;
		result = result * base_len + j;
		i++;
	}
	return (sign * result);
}

int	count_digits(int nbr, int base_len)
{
	int	digits;

	digits = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		digits++;
		nbr /= base_len;
	}
	return (digits);
}

void	fill_result(char *res, int nbr, char *base_to, int len)
{
	int	base_len;
	int	i;

	base_len = strlen_base(base_to);
	i = len - 1;
	if (nbr == 0)
	{
		res[i] = base_to[0];
		return ;
	}
	while (nbr > 0)
	{
		res[i--] = base_to[nbr % base_len];
		nbr /= base_len;
	}
}

char	*to_base(int nbr, char *base_to)
{
	int		base_len;
	int		neg;
	int		digits;
	char	*result;

	base_len = strlen_base(base_to);
	neg = (nbr < 0);
	if (neg)
		nbr = -nbr;
	digits = count_digits(nbr, base_len);
	result = malloc(neg + digits + 1);
	if (!result)
		return (NULL);
	result[neg + digits] = '\0';
	fill_result(result, nbr, base_to, neg + digits);
	if (neg)
		result[0] = 45;
	return (result);
}
