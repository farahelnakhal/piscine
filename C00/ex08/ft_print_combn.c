/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_combn.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fqussay <fqussay@stuydent.42abudhabi.ae>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/12 13:19:48 by fqussay          #+#    #+#              */
/*   Updated: 2026/06/30 12:19:28 by fqussay         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn_recursive(int n, int c, int i, char *arr)
{
	if (i == n)
	{
		write(1, arr, n);
		if (arr[0] != (10 - n) + '0')
			write(1, ", ", 2);
		return ;
	}
	while (c <= 9)
	{
		arr[i] = c + '0';
		ft_print_combn_recursive(n, c + 1, i + 1, arr);
		c++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];

	if (n > 0 && n < 10)
		ft_print_combn_recursive(n, 0, 0, arr);
}
