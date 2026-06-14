/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqussay <fqussay@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 21:39:26 by username          #+#    #+#             */
/*   Updated: 2026/06/13 22:46:01 by fqussay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*last;
	int	c;

	last = tab + (size - 1);
	while (tab < last)
	{
		c = *tab;
		*tab = *last;
		*last = c;
		tab++;
		last--;
	}
}
