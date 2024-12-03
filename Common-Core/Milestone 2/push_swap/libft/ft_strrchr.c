/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:05:39 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:05:42 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//last_ch = str; guarda o ultimo caracter
//str++; percorre ate o ultimo caracter

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const char	*last_ch = NULL;

	while (*str)
	{
		if (*str == (unsigned char)ch)
			last_ch = str;
		str++;
	}
	if ((unsigned char)ch == '\0')
		return ((char *)str);
	return ((char *)last_ch);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *str = "Happy day!";
	
	printf("Original: %s\n", str);
	
	printf("Result: %s\n", ft_strrchr(str, 'd'));
	printf("Result: %s\n", ft_strrchr(str, 'x'));
	printf("Result: %s\n", ft_strrchr(str, '\0'));
	return (0);
}*/
/*
output: Original: Happy day!
	Result: day!
	Result: (null)
	Result:
*/
