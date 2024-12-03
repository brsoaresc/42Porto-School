/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:04:06 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:04:10 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str != '\0')
	{
		if (*str == (unsigned char)ch)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)ch == '\0')
		return ((char *)str);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char str[] = "Happy day!";
	
	printf("Original: %s\n", str);
	
	printf("Result: %s\n", ft_strchr(str, 'H'));
	printf("Result: %s\n", ft_strchr(str, 'e'));
	printf("Result: %s\n", ft_strchr(str, '\0'));
	return (0);
}*/
/*
output: Original: Happy day!
	Result: Happy day!
	Result: (null)
	Result: 
*/
