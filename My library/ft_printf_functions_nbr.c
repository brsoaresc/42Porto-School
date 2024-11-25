/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions_nbr.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:13:17 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/30 10:13:33 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	printf_putnbr(int number)
{
	int	i;

	i = 0;
	if (number == -2147483648)
		return (printf_putstr("-2147483648"));
	if (number < 0)
	{
		i += printf_putchar('-');
		number = -number;
	}
	if (number >= 10)
		i += printf_putnbr(number / 10);
	i += printf_putchar((number % 10) + '0');
	return (i);
}

int	printf_putnbr_unsigned(unsigned int number)
{
	int	i;

	i = 0;
	if (number >= 10)
		i += printf_putnbr_unsigned(number / 10);
	i += printf_putchar((number % 10) + '0');
	return (i);
}

int	printf_putnbr_hex(unsigned int number, int lowercase)
{
	int		i;
	char	*base;

	i = 0;
	if (lowercase)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (number >= 16)
		i += printf_putnbr_hex(number / 16, lowercase);
	i += printf_putchar(base[number % 16]);
	return (i);
}
