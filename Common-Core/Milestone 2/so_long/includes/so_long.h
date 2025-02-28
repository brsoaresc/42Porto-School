/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:27:20 by brsoares          #+#    #+#             */
/*   Updated: 2025/02/11 18:32:48 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include "../minilibx-linux/mlx_int.h"

# define EXTENSION_ERROR "Map extension incorrect. Correct extension is .ber."
# define MAP_ERROR "Unable to open map."
# define SIZE_ERROR "The map size is incorrect."
# define BOARDER_ERROR "The map is not enclosed by walls."
# define MALLOC_ERROR "Memory allocation was unsuccessful."
# define PLAYER_ERROR "The map must have only one player and one exit."
# define ASSETS_ERROR "The assets in the map are incorrect."
# define COLLECTIBLES_ERROR "The map does not contain any collectibles."
# define PATH_ERROR "The map does not have a valid path."
# define MLX_ERROR "There is an error in the MLX."

# define SIZE 85

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_image
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;

}	t_image;

typedef struct s_map
{
	size_t		width;
	size_t		height;
	size_t		collectibles;
	size_t		gathered;
	char		**map;
	int			exit_check;
	int			movement;
	void		*player;
	t_point		player_pos;
	void		*exit;
	t_point		exit_pos;
	void		*floor;
	void		*shuriken;
	void		*wall;
	void		*mlx_ptr;
	void		*win_ptr;
	t_image		image;
}				t_map;

//general
t_map	*init(void);
void	init_game(t_map *game);
void	init_image(t_map *game);
void	read_map(char *argv, t_map *game);
size_t	count_width(const char *str);
size_t	count_lines(char *file);
void	copy_map(int fd, t_map *game);
void	ft_free_array(char **duplicate, size_t height);
void	ft_kill(int number, t_map *game);
void	ft_free_all(t_map *game);
void	ft_free_map(t_map *game);
int		ft_exit_game(t_map *game);
//checkers
void	check_extension(char *file);
void	validate_map(t_map *game);
void	validate_boarders(t_map *game);
void	validate_size(t_map *game);
void	validate_assets(t_map *game);
void	validate_elements(t_map *game);
void	validate_collectibles(t_map *game);
void	validate_path(t_map *game);
void	ft_flood_fill(char **duplicate, t_map *game, size_t x, size_t y);
//render
void	render(t_map *game);
void	open_window(t_map *game);
void	create_sprites(t_map *game);
void	render_map(t_map *game);
void	render_image(t_map *game, char c, size_t x, size_t y);
//moviments
int		key_press(int key, t_map *game);
void	validate_move_up_down(int key, t_map *game);
void	validate_move_left_right(int key, t_map *game);
void	process_move(t_map *game, int y_offset, int x_offset);
void	move_up(t_map *game);
void	move_down(t_map *game);
void	move_left(t_map *game);
void	move_right(t_map *game);
void	check_win(t_map *game);

#endif
