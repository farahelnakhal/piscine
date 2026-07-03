/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqussay <fqussay@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:24:38 by fqussay           #+#    #+#             */
/*   Updated: 2026/06/23 15:29:20 by fqussay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	total_len(int size, char **strs, char *sep)
{
	int	total;
	int	sep_len;
	int	i;

	total = 0;
	sep_len = strlen(sep);
	i = 0;
	while (i < size)
	{
		total += strlen(strs[i]);
		if (i < size - 1)
			total += sep_len;
		i++;
	}
	return (total);
}

static void	fill(char *res, int size, char **strs, char *sep)
{
	int	sep_len;
	int	i;
	int	j;
	int	k;

	sep_len = strlen(sep);
	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (j < sep_len)
				res[k++] = sep[j++];
		}
		i++;
	}
	res[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total;

	if (size == 0)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	total = total_len(size, strs, sep);
	result = malloc(total + 1);
	if (!result)
		return (NULL);
	fill(result, size, strs, sep);
	return (result);
}
