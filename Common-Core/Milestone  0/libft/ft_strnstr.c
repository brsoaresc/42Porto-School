/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:05:29 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:15:30 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t max_n)
{
	size_t	str;
	size_t	substr;

	if (*needle == '\0')
		return ((char *)haystack);
	str = 0;
	while (haystack[str] && str < max_n)
	{
		substr = 0;
		while ((str + substr) < max_n
			&& haystack[str + substr] == needle[substr]
			&& needle[substr]
			&& haystack[str + substr])
		{
			substr++;
		}
		if (needle[substr] == '\0')
			return ((char *)&haystack[str]);
		str++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *haystack = "Happy day!";
	const char *needle = "day";
	
	printf("Original: %s\n", haystack);
	
	printf("Result: %s\n", ft_strnstr(haystack, needle, 10));
	printf("Result: %s\n", ft_strnstr(haystack, "x", 10));
	printf("Result: %s\n", ft_strnstr(haystack, "", 10));
	return (0);
}*/
/*
output: Original: Happy day!
	Result: day!
	Result: (null)
	Result: Happy day!
*/
