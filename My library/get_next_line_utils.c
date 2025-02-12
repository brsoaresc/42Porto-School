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

char	*gnl_strndup(char *s, int len)
{
	char	*str;
	int		i;

	str = (char *) gnl_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

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
	size_t	len_l;
	size_t	len_b;

	len_l = gnl_strlen(l_line);
	len_b = gnl_strlen(buffer);
	if (!l_line)
		l_line = (char *)gnl_calloc(1, sizeof(char));
	if (!l_line || !buffer || len_l + len_b == 0)
		return (gnl_free_data(NULL, l_line), NULL);
	str = gnl_calloc(len_l + len_b + 1, sizeof(char));
	if (!str)
		return (gnl_free_data(NULL, l_line), NULL);
	i = -1;
	while (l_line[++i])
		str[i] = l_line[i];
	j = -1;
	while (buffer[++j])
		str[i++] = buffer[j];
	gnl_free_data(NULL, l_line);
	return (str);
}
