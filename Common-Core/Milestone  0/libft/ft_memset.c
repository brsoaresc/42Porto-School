/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:03:55 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:03:57 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//*ptr iterar sobre os bytes de dest
//i indice para controlar quantos bytes foram preenchidos
//dest convertido e armazenado em ptr

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t nb)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)dest;
	i = 0;
	while (i < nb)
	{
		ptr[i] = (unsigned char)ch;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[50] = "Happy day!";
	
	printf("Before: %s\n", str);
	
	memset(str, 'Z', 5);
	printf("After: %s\n", str);
	return (0);
}*/
/*
output: Before: Happy day!
	After: ZZZZZ day!
*/
