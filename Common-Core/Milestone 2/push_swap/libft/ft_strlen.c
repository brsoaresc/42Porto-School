/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:04:52 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:04:54 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	 char str[] = "Happy!";

	 printf("String: %s\n", str);
	 printf("String length: %zu\n", ft_strlen(str)); //zu para size_t
	 return (0);
}*/
/*
output: String: Happy!
	String length: 6
*/
