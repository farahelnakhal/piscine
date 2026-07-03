/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqussay <fqussay@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 22:13:46 by fqussay           #+#    #+#             */
/*   Updated: 2026/06/19 10:42:24 by fqussay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ds;
	unsigned int	ss;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < size && dest[i] != '\0')
		i++;
	ds = i;
	j = 0;
	while (src[j] != '\0')
		j++;
	ss = j;
	if (ds >= size)
		return (size + ss);
	i = ds;
	j = 0;
	while (j < size - ds - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ds + ss);
}
