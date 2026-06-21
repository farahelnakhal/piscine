/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqussay <fqussay@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 17:06:32 by fqussay           #+#    #+#             */
/*   Updated: 2026/06/21 17:09:17 by fqussay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	else if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
