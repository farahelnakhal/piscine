/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_range.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fqussay <fqussay@stuydent.42abudhabi.ae>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/22 19:21:47 by fqussay          #+#    #+#              */
/*   Updated: 2026/06/24 09:57:12 by fqussay         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*final;
	int	i;

	if (min >= max)
		return (NULL);
	final = malloc((max - min) * 4);
	i = 0;
	while (min < max)
	{
		final[i] = min;
		i++;
		min++;
	}
	return (final);
}
