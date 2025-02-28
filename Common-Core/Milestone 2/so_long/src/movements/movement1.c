/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:49:02 by brsoares          #+#    #+#             */
/*   Updated: 2025/02/11 18:49:12 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	process_move(t_map *game, int y_offset, int x_offset)
{
	char	next_tile;
	int		new_y;
	int		new_x;

	new_y = game->player_pos.y + y_offset;
	new_x = game->player_pos.x + x_offset;
	next_tile = game->map[new_y][new_x];
	if (next_tile == 'C')
	{
		game->collectibles--;
	}
	else if (next_tile == 'E')
	{
		check_win(game);
		return ;
	}
	game->map[game->player_pos.y][game->player_pos.x] = '0';
	game->player_pos.y = new_y;
	game->player_pos.x = new_x;
	game->map[game->player_pos.y][game->player_pos.x] = 'P';
	render_map(game);
}

void	move_up(t_map *game)
{
	process_move(game, -1, 0);
}

void	move_down(t_map *game)
{
	process_move(game, 1, 0);
}

void	move_left(t_map *game)
{
	process_move(game, 0, -1);
}

void	move_right(t_map *game)
{
	process_move(game, 0, 1);
}
