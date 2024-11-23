/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 08:11:24 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/27 08:23:07 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while(!(argv[1][i] >= 33 && argv[1][i] <= 126))
		       i++;
		while(argv[1][i] && argv[1][i] >= 33 && argv[1][i] <= 126)
		{
			write(1, &argv[1][i], 1);
			i++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
