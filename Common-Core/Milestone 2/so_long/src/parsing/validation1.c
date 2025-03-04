/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:50:22 by brsoares          #+#    #+#             */
/*   Updated: 2025/02/11 18:50:31 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	validate_collectibles(t_map *game)
{
	size_t	i;
	size_t	j;

	game->collectibles = 0;
	i = 0;
	while (i < game->height)
	{
		j = 0;
		while (j < game->width)
		{
			if (game->map[i][j] == 'C')
				game->collectibles++;
			j++;
		}
		i++;
	}
	if (game->collectibles < 1)
		ft_kill(7, game);
}

void	ft_flood_fill(char **duplicate, t_map *game, size_t x, size_t y)
{
	if (x >= game->width || y >= game->height)
		return ;
	if (duplicate[y][x] == '1' || duplicate[y][x] == 'F')
		return ;
	if (duplicate[y][x] == 'C')
	{
		game->gathered++;
		duplicate[y][x] = 'F';
	}
	else if (duplicate[y][x] == 'E')
	{
		game->exit_check = 1;
		return ;
	}
	else
		duplicate[y][x] = 'F';
	ft_flood_fill(duplicate, game, x + 1, y);
	ft_flood_fill(duplicate, game, x, y + 1);
	ft_flood_fill(duplicate, game, x - 1, y);
	ft_flood_fill(duplicate, game, x, y - 1);
}

void	validate_path(t_map *game)
{
	char		**duplicate;
	size_t		i;

	duplicate = calloc(game->height + 1, sizeof(char *));
	if (!duplicate)
		ft_kill(5, game);
	i = -1;
	while (++i < game->height)
		duplicate[i] = ft_strdup(game->map[i]);
	ft_flood_fill(duplicate, game, game->player_pos.x, game->player_pos.y);
	if (game->collectibles != game->gathered || game->exit_check != 1)
	{
		ft_free_array(duplicate, game->height);
		ft_kill(8, game);
	}
	ft_free_array(duplicate, game->height);
}
