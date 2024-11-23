/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:43:12 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/17 08:36:56 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	if (dest == NULL || src == NULL)
		return (0);
	a = ft_strlen(dest);
	if (size <= a)
	{
		return (size + ft_strlen(src));
	}
	b = 0;
	while (src[b] && size > a + 1)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (a + ft_strlen(&src[b]));
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[40] = "We make it happen";
	char src[] = "'cause we believe it";
	unsigned int result = ft_strlcat (dest, src, sizeof(dest));
	
	printf("Resultado: %s\n", dest);
	printf("Comprimento necessario: %i\n",result);
	return (0);
}
*/
