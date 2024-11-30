/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:12:07 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 09:12:10 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_number(int number)
{
	int	len;

	len = 0;
	if (number <= 0)
		len++;
	while (number != 0)
	{
		len++;
		number /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	number;
	int		len;

	number = n;
	len = ft_len_number(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	while (len > 0 && str[len - 1] != '-')
	{
		len--;
		str[len] = (number % 10) + '0';
		number /= 10;
	}
	if (n == 0)
		str[0] = '0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Test1: %s\n", ft_itoa(-2147483648));
	printf("Test2: %s\n", ft_itoa(2147483647));
	return (0);
}*/
/*
output: Test1: -2147483648
	Test2: 2147483647
*/
