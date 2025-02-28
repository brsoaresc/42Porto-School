/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:46:12 by brsoares          #+#    #+#             */
/*   Updated: 2025/02/11 18:46:20 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_game(t_map *game)
{
	if (!game)
		return ;
	ft_memset(game, 0, sizeof(t_map));
	ft_memset(&game->player, 0, sizeof(t_point));
	ft_memset(&game->exit, 0, sizeof(t_point));
	ft_memset(&game->image, 0, sizeof(t_image));
}

t_map	*init(void)
{
	t_map	*game;

	game = malloc(sizeof(t_map));
	if (!game)
		ft_kill(5, game);
	init_game(game);
	game->mlx_ptr = mlx_init();
	if (!game->mlx_ptr)
	{
		free(game);
		ft_kill(5, NULL);
	}
	return (game);
}
