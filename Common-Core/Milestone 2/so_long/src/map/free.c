/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:47:32 by brsoares          #+#    #+#             */
/*   Updated: 2025/02/11 18:47:36 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_array(char **duplicate, size_t height)
{
	size_t	y;

	y = 0;
	if (!duplicate || !duplicate[0])
	{
		free(duplicate);
		return ;
	}
	while (y < height)
	{
		free(duplicate[y]);
		y++;
	}
	free(duplicate);
}

void	ft_free_map(t_map *game)
{
	size_t	y;

	y = 0;
	if (!game || !game->map || !game->map[0])
	{
		free(game->map);
		return ;
	}
	while (y < game->height)
	{
		free(game->map[y]);
		y++;
	}
	free(game->map);
}

void	destroy_images(t_map *game)
{
	if (game->floor)
		mlx_destroy_image(game->mlx_ptr, game->floor);
	if (game->exit)
		mlx_destroy_image(game->mlx_ptr, game->exit);
	if (game->wall)
		mlx_destroy_image(game->mlx_ptr, game->wall);
	if (game->player)
		mlx_destroy_image(game->mlx_ptr, game->player);
	if (game->shuriken)
		mlx_destroy_image(game->mlx_ptr, game->shuriken);
}

int	ft_exit_game(t_map *game)
{
	ft_free_all(game);
	exit(0);
	return (0);
}

void	ft_free_all(t_map *game)
{
	if (!game)
		return ;
	if (game->map)
		ft_free_map(game);
	destroy_images(game);
	if (game->image.img)
		mlx_destroy_image(game->mlx_ptr, game->image.img);
	if (game->win_ptr)
		mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	if (game->mlx_ptr)
	{
		mlx_destroy_display(game->mlx_ptr);
		free(game->mlx_ptr);
	}
	free(game);
}
