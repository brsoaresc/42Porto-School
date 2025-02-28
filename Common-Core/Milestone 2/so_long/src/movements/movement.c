/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:48:36 by brsoares          #+#    #+#             */
/*   Updated: 2025/02/11 18:48:47 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_win(t_map *game)
{
	if (game->collectibles == 0)
	{
		game->movement++;
		ft_printf("Number of movements: %d\n", game->movement);
		ft_printf("You are now ready to strike from the shadows!\n");
		ft_free_all(game);
		exit(1);
	}
}

void	validate_move_up_down(int key, t_map *game)
{
	int	y_offset;

	if (key == XK_w || key == XK_Up)
		y_offset = -1;
	else
		y_offset = 1;
	if (game->map[game->player_pos.y + y_offset][game->player_pos.x] == '1')
		return ;
	if (game->map[game->player_pos.y + y_offset][game->player_pos.x] == 'E'
		&& game->collectibles != 0)
		return ;
	if (y_offset == -1)
		move_up(game);
	else
		move_down(game);
	game->movement++;
	ft_printf("Number of movements: %d\n", game->movement);
}

void	validate_move_left_right(int key, t_map *game)
{
	int	x_offset;

	if (key == XK_a || key == XK_Left)
		x_offset = -1;
	else
		x_offset = 1;
	if (game->map[game->player_pos.y][game->player_pos.x + x_offset] == '1')
		return ;
	if (game->map[game->player_pos.y][game->player_pos.x + x_offset] == 'E'
		&& game->collectibles != 0)
		return ;
	if (x_offset == -1)
		move_left(game);
	else
		move_right(game);
	game->movement++;
	ft_printf("Number of movements: %d\n", game->movement);
}

int	key_press(int key, t_map *game)
{
	if (key == XK_Escape)
	{
		ft_free_all(game);
		exit(1);
	}
	if (key == XK_w || key == XK_Up || key == XK_s || key == XK_Down)
		validate_move_up_down(key, game);
	if (key == XK_a || key == XK_Left || key == XK_d || key == XK_Right)
		validate_move_left_right(key, game);
	return (0);
}
