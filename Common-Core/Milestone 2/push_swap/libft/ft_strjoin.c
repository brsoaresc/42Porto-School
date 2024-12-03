/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:24:46 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 09:24:50 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s1 = "Happy ";
	char *s2 = "day!";
	char *result;

	printf("Before s1: %s e s2: %s\n", s1, s2);

	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("After: %s\n", result);
		free(result);
	}
	else
	{
		printf("Allocation failed\n");
	}
	return (0);
}*/
/*
output: Before s1: Happy  e s2: day!
	After: Happy day!
*/
