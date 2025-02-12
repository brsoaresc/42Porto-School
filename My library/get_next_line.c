/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:18:55 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/30 11:19:01 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	gnl_free_data(char *buffer, char *str)
{
	if (buffer)
		free(buffer);
	if (str)
		free(str);
}

char	*gnl_read_file(int fd, char *new_str)
{
	char	*buffer;
	int		read_bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (gnl_free_data(NULL, new_str), NULL);
	read_bytes = 1;
	while (!gnl_strchr(new_str, '\n') && read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
			return (gnl_free_data(buffer, new_str), NULL);
		buffer[read_bytes] = '\0';
		new_str = gnl_strjoin(new_str, buffer);
		if (!new_str)
			return (gnl_free_data(buffer, NULL), NULL);
	}
	gnl_free_data(buffer, NULL);
	return (new_str);
}

char	*gnl_extract_line(char *str)
{
	int	i;
	int	len;

	if (!str || !str[0])
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		len = i + 1;
	else
		len = i;
	return (gnl_strndup(str, len));
}

char	*gnl_reset_str(char *str)
{
	int		i;
	char	*new_str;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
		return (gnl_free_data(NULL, str), NULL);
	new_str = gnl_strndup(str + i + 1, gnl_strlen(str) - i - 1);
	gnl_free_data(NULL, str);
	return (new_str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*left_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	left_line = gnl_read_file(fd, left_line);
	if (!left_line)
		return (NULL);
	line = gnl_extract_line(left_line);
	if (!line)
		return (gnl_free_data(NULL, left_line), NULL);
	left_line = gnl_reset_str(left_line);
	return (line);
}
