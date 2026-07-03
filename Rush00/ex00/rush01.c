/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-darm <aal-darm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 15:09:01 by username          #+#    #+#             */
/*   Updated: 2026/06/14 15:35:18 by aal-darm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (i == 0 && j == 0)
				ft_putchar('/');
			else if (i == 0 && j == x - 1)
				ft_putchar('\\');
			else if (i == y - 1 && j == 0 && i != 0)
				ft_putchar('\\');
			else if (i == y - 1 && j == x - 1 && i != 0)
				ft_putchar('/');
			else if (i == 0 || i == y - 1)
				ft_putchar('*');
			else if (j == 0 || j == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
