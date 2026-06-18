/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   a1.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/17 20:49:01 by username         #+#    #+#              */
/*   Updated: 2026/06/17 21:29:48 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc != 2 || argv[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	char	*rot13_l;
	char	*rot13_u;

	rot13_l = "nopqrstuvwxyzabcdefghijklm";
	rot13_u = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 65 && argv[1][i] <= 90)
		{
			write(1, &(rot13_u[argv[1][i] - 65]), 1);
		}
		else if (argv[1][i] >= 97 && argv[1][i] <= 122)
		{
			write(1, &(rot13_l[argv[1][i] - 97]), 1);
		}
		else
		{
			write(1, &(argv[1][i]), 1);
		}
		i++;
	}
	return (0);
}
