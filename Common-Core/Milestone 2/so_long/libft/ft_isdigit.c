/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:01:34 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:01:45 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Test1 = %d\n", ft_isdigit('b'));
	printf("Test2 = %d\n", ft_isdigit('7'));
	printf("Test3 = %d\n", ft_isdigit('#'));
	return (0);
}*/
/*
output: Test1 = 0
	Test2 = 1
	Test3 = 0
*/
