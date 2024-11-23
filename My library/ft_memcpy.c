/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:02:59 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:03:03 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t nb)
{
	size_t		i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < nb)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[20];
	char str[] = "Happy day!";
	
	printf("Before: %s\n", str);
	
	ft_memcpy(dest, str, 5);
	printf("After: %s\n", dest);
	return (0);
}*/
/*
output: Befor: Happy day!
	After: Happy
*/
