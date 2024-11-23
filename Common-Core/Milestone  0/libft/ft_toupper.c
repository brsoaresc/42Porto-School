/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:06:16 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:06:24 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return (ch);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("return test1 = %c\n", ft_toupper('a'));
	printf("return test2 = %c\n", ft_toupper('z'));
	printf("return test3 = %c\n", ft_toupper('B'));
	printf("return test4 = %c\n", ft_toupper('7'));
	return (0);
}*/
/*
output: Test1 = A
	Test2 = Z
	Test3 = B
	Test4 = 7
*/
