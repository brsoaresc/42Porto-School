/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:03:17 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:03:41 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//1 if verifica a sobreposiçao
//1 while se sobrepoem, a função copia os bytes de forma reversa
//2 while copia normal

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t nb)

{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s && d < s + nb)
	{
		while (nb--)
		{
			d[nb] = s[nb];
		}
	}
	else
	{
		while (nb--)
		{
			*d++ = *s++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Happy day!";
	char dest[50];

	ft_memmove(dest, src, 12);
	printf("Final result without overlap: %s\n", dest);
	
	ft_memmove(src + 6, src, 6);
	printf("Final result with overlap: %s\n", src);
	return (0);
}*/
/*
output: Final result without overlap: Happy day!
	Final result with overlap: Happy Happy
*/
