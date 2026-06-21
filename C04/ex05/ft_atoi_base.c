/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqussay <fqussay@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 22:19:51 by fqussay           #+#    #+#             */
/*   Updated: 2026/06/21 22:20:20 by fqussay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	k;
	int	l;

	i = 0;
	l = 0;
	k = 1;
	while (str[i] == 32 || str[i] == '\t')
		++i;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			k *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		l = (l * 10) + (str[i] - '0');
		i++;
	}
	return (l * k);
}
