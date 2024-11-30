/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:02:39 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:12:48 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *am1, const void *am2, size_t nb)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)am1;
	s2 = (unsigned char *)am2;
	i = 0;
	while (i < nb)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char s1[] = "Hello";
	const char s2[] = "Helto";

	int result = ft_memcmp(s1, s2, 5);

	if (result == 0)
		printf("Equal\n");
	else
		printf("Different, a difference: %d\n", result);
	return (0);
}*/
/*
output: Different, a difference: -8
*/
