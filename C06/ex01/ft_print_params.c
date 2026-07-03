/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_params.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fqussay <fqussay@stuydent.42abudhabi.ae>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/22 09:05:02 by fqussay          #+#    #+#              */
/*   Updated: 2026/06/22 15:27:54 by fqussay         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &(argv[j][i]), 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
