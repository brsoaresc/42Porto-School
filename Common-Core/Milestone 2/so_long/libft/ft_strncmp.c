/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:05:12 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:05:14 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (str1[i] && str2[i]) && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("Happy", "Happy", 5));
	printf("%d\n", ft_strncmp("Happy", "Happi", 5));
	printf("%d\n", ft_strncmp("Happy", "Happ", 5));
	printf("%d\n", ft_strncmp("Happy", "Happy", 3));
	return (0);
}*/
/*
output: 0
	16
	121
	0
*/
