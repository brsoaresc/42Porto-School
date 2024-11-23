/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:02:22 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:02:27 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//*prt1 percorre a área de memória byte a byte
//i integrador p/ iterações do loop
//while - retorna um ponteiro para a posição do caractere na memória, 
//converter o ponteiro de volta para void *

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t nb)
{
	const unsigned char	*ptr1;
	size_t				i;

	ptr1 = (const unsigned char *)ptr;
	i = 0;
	while (i < nb)
	{
		if (ptr1[i] == (unsigned char)ch)
			return ((void *)(ptr1 + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Happy day!";
	char *result;

	result = ft_memchr(str, 'd', 12);
	if (result)
		printf("Found 'd' at position: %ld\n", result - str);
	else
		printf("'d' not found.\n");
	return (0);
}*/
/*
output: Found 'd' at position: 6
*/
