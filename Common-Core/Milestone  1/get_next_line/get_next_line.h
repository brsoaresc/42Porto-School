/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:19:08 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/30 11:19:11 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_reset_str(char *str);
char	*ft_extract_line(char *str);
char	*ft_read_file(int fd, char *new_str);
int		ft_strlen(char *str);
char	*ft_strchr(const char *str, int ch);
void	*ft_calloc(size_t nb, size_t size);
char	*ft_strjoin(char *l_line, char *buffer);

#endif
