/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:00:37 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:00:52 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Test1 = %d\n", ft_isalpha('b'));
	printf("Test2 = %d\n", ft_isalpha('B'));
	printf("Test3 = %d\n", ft_isalpha('7'));
	printf("Test4 = %d\n", ft_isalpha('#'));
	return (0);
}*/
/*
output: Test1 = 1
	Test2 = 1
	Test3 = 0
	Test4 = 0
*/
