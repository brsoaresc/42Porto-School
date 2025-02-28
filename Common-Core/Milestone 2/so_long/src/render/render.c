/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:51:03 by brsoares          #+#    #+#             */
/*   Updated: 2025/02/11 18:51:11 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_sprites(t_map *game)
{
	int	y;
	int	x;

	game->floor = mlx_xpm_file_to_image(game->mlx_ptr,
			"./textures/floor.xpm", &x, &y);
	game->exit = mlx_xpm_file_to_image(game->mlx_ptr,
			"./textures/exit.xpm", &x, &y);
	game->wall = mlx_xpm_file_to_image(game->mlx_ptr,
			"./textures/wall.xpm", &x, &y);
	game->player = mlx_xpm_file_to_image(game->mlx_ptr,
			"./textures/player.xpm", &x, &y);
	game->shuriken = mlx_xpm_file_to_image(game->mlx_ptr,
			"./textures/shuriken.xpm", &x, &y);
}

void	open_window(t_map *game)
{
	if (game->mlx_ptr == NULL)
		ft_kill(10, game);
	game->win_ptr = mlx_new_window(game->mlx_ptr, game->width * SIZE,
			game->height * SIZE, "so_long");
	if (game->win_ptr == NULL)
		ft_kill(10, game);
	game->image.img = mlx_new_image(game->mlx_ptr, game->width * SIZE,
			game->height * SIZE);
	game->image.addr = mlx_get_data_addr(game->image.img,
			&game->image.bits_per_pixel, &game->image.line_length,
			&game->image.endian);
}

void	render_map(t_map *game)
{
	size_t	y;
	size_t	x;

	y = -1;
	while (++y < game->height)
	{
		x = -1;
		while (++x < game->width)
			render_image(game, game->map[y][x], x, y);
	}
}

void	render_image(t_map *game, char c, size_t x, size_t y)
{
	void	*img;

	if (c == '0')
		img = game->floor;
	else if (c == '1')
		img = game->wall;
	else if (c == 'C')
		img = game->shuriken;
	else if (c == 'E')
		img = game->exit;
	else if (c == 'P')
		img = game->player;
	else
		return ;
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, img,
		x * SIZE, y * SIZE);
}

void	render(t_map *game)
{
	open_window(game);
	if (!game->win_ptr)
		ft_kill(10, game);
	create_sprites(game);
	render_map(game);
	mlx_hook(game->win_ptr, KeyPress, KeyPressMask, &key_press, game);
	mlx_hook(game->win_ptr, DestroyNotify, 0, ft_exit_game, game);
	mlx_loop(game->mlx_ptr);
}
