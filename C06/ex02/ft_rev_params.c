/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_rev_params.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fqussay <fqussay@stuydent.42abudhabi.ae>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/22 09:10:20 by fqussay          #+#    #+#              */
/*   Updated: 2026/06/22 15:28:00 by fqussay         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	argc--;
	while (argc != 0)
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			write(1, &(argv[argc][i]), 1);
			i++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
