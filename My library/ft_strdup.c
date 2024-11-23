/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:04:20 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:04:22 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*strdup;
	size_t	len;
	size_t	i;

	len = 0;
	while (str[len])
		len++;
	strdup = (char *)malloc(len + 1);
	if (!strdup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[len] = '\0';
	return (strdup);
}
/*
#include <stdio.h>

int	main(void)
{
	char *dup = ft_strdup("Happy day, 42!");
	
	if (dup) 
	{
		printf("%s\n", dup);
		free(dup);
	}
	return (0);
}*/
/*
output: Happy day, 42!
*/
