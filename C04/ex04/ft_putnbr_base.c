/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqussay <fqussay@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 22:43:08 by fqussay           #+#    #+#             */
/*   Updated: 2026/06/21 22:04:07 by fqussay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_valid_base(char *base, int l)
{
	int	i;
	int	j;

	if (base == '\0' || l <= 1)
		return (0);
	i = 0;
	while (i < l)
	{
		if (base[i] == 43 || base[i] == 45 || base[i] == 32)
			return (0);
		j = i + 1;
		while (j < l)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_digits(int n, char *base, int l)
{
	if (n >= l)
		print_digits(n / l, base, l);
	write(1, &base[n % l], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;

	l = str_len(base);
	if (!is_valid_base(base, l))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		print_digits(-(nbr / l), base, l);
		write(1, &base[-(nbr % l)], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	print_digits(nbr, base, l);
}
