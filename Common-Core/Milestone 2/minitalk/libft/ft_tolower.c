/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:05:52 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:05:59 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return (ch);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Test1 = %c\n", ft_tolower('A'));
	printf("Test2 = %c\n", ft_tolower('Z'));
	printf("Test3 = %c\n", ft_tolower('b'));
	printf("Test4 = %c\n", ft_tolower('7'));
	return (0);
}*/
/*
output: Test1 = a
	Test2 = z
	Test3 = b
	Test4 = 7
*/
