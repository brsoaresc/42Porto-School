/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:19:17 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/30 11:19:24 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	gnl_strlen(char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (str && str[len])
		len++;
	return (len);
}

char	*gnl_strchr(const char *str, int ch)
{
	if (!str)
		return (0);
	while (*str != (char)ch)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char *)str);
}

void	*gnl_calloc(size_t nb, size_t size)
{
	size_t			i;	
	unsigned char	*str;

	str = malloc(nb * size);
	if (!str)
		return (0);
	i = 0;
	while (i < (nb * size))
		str[i++] = '\0';
	return (str);
}

char	*gnl_strjoin(char *l_line, char *buffer)
{
	int		i;
	int		j;
	char	*str;

	if (!l_line)
		l_line = (char *) gnl_calloc(1, sizeof(char));
	if (!l_line || !buffer)
		return (NULL);
	if (gnl_strlen(l_line) + gnl_strlen(buffer) == 0)
	{
		free(l_line);
		return (NULL);
	}
	str = gnl_calloc((gnl_strlen(l_line) + gnl_strlen(buffer) + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (l_line[++i])
		str[i] = l_line[i];
	j = 0;
	while (buffer[j])
		str[i++] = buffer[j++];
	free(l_line);
	l_line = NULL;
	return (str);
}
