/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_program_name.c                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fqussay <fqussay@stuydent.42abudhabi.ae>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/22 08:46:20 by fqussay          #+#    #+#              */
/*   Updated: 2026/06/22 15:28:54 by fqussay         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	(void) argc;
	i = 0;
	while (argv[0][i] != '\0')
	{
		write(1, &(argv[0][i]), 1);
		i++;
	}
	write(1, "\n", 1);
}
