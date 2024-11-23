/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:04:39 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:04:42 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//i integrador para copia
//return (src_len); //comprimento da string de origem src_len, sem fazer cópia

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Happy day!";
	char dest[9];

	printf("After copy: %s\n", src);

	printf("String length: %zu\n", ft_strlcpy(dest, src, 9));
	printf("Before copy: %s\n", dest);
	return (0);
}*/
/*
output: After copy: Happy day!
	String length: 10
	Before copy: Happy da
*/
