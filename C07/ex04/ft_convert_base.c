/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_convert_base.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fqussay <fqussay@stuydent.42abudhabi.ae>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/23 13:50:38 by fqussay          #+#    #+#              */
/*   Updated: 2026/06/24 09:59:54 by fqussay         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		to_int(char *nbr, char *base_from);
char	*to_base(int nbr, char *base_to);

int	strlen_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	len;
	int	i;
	int	j;

	len = strlen_base(base);
	if (len < 2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == 43 || base[i] == 45 || base[i] == 32)
			return (0);
		if (base[i] >= 9 && base[i] <= 13)
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	skip_prefix(char *nbr, int *i)
{
	int	sign;

	sign = 1;
	while (nbr[*i] == 32 || (nbr[*i] >= 9 && nbr[*i] <= 13))
		(*i)++;
	while (nbr[*i] == 43 || nbr[*i] == 45)
	{
		if (nbr[*i] == 45)
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	value;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	value = to_int(nbr, base_from);
	return (to_base(value, base_to));
}
