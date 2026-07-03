/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqussay <fqussay@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 09:00:12 by fqussay           #+#    #+#             */
/*   Updated: 2026/06/30 10:19:05 by fqussay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char *) malloc(i + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*final;
	int					i;

	final = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (final == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		final[i].size = ft_strlen(av[i]);
		final[i].str = av[i];
		final[i].copy = ft_strdup(av[i]);
		i++;
	}
	final[i].str = 0;
	final[i].size = 0;
	final[i].copy = 0;
	return (final);
}
