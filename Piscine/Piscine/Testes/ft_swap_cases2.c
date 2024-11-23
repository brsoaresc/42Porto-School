/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_cases2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 06:46:12 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/19 06:49:05 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	a;
	int	c;
	char	b;

	if (argc < 3)
		write(1, "ERRO\n", 5);
	
	c = 1;
	while (c < argc)
	{
		a = 0;
		while (argv[c][a])
		{
			if ((argv[c][a] >= 65) && (argv[c][a] <= 90))
				b = argv[c][a] + 32;
			else if ((argv[c][a] >= 97) && (argv[c][a] <= 122))
        	                b = argv[c][a] - 32;
        	        else
        	        	b = argv[c][a];
        	        write(1, &b, 1);
        	        a += 1;
		}
		if (c < argc - 1)
			write(1, " ", 1);
		c += 1;
	}
	write(1, "\n", 1);
	return (0);
}
