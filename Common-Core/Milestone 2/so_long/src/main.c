/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:46:46 by brsoares          #+#    #+#             */
/*   Updated: 2025/02/11 18:46:55 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	int		fd;
	t_map	*game;

	if (argc != 2)
		return (0);
	check_extension(argv[1]);
	fd = open(argv[1], O_RDONLY);
	if (fd <= 0)
		ft_kill(2, NULL);
	game = init();
	if (!game)
		ft_kill(5, NULL);
	read_map(argv[1], game);
	validate_map(game);
	render(game);
	close(fd);
	return (0);
}
