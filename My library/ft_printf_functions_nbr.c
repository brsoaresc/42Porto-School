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

#include "ft_printf.h"

int	ft_putnbr(int number)
{
	int	i;

	i = 0;
	if (number == -2147483648)
		return (ft_putstr("-2147483648"));
	if (number < 0)
	{
		i += ft_putchar('-');
		number = -number;
	}
	if (number >= 10)
		i += ft_putnbr(number / 10);
	i += ft_putchar((number % 10) + '0');
	return (i);
}

int	ft_putnbr_unsigned(unsigned int number)
{
	int	i;

	i = 0;
	if (number >= 10)
		i += ft_putnbr_unsigned(number / 10);
	i += ft_putchar((number % 10) + '0');
	return (i);
}

int	ft_putnbr_hex(unsigned int number, int lowercase)
{
	int		i;
	char	*base;

	i = 0;
	if (lowercase)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (number >= 16)
		i += ft_putnbr_hex(number / 16, lowercase);
	i += ft_putchar(base[number % 16]);
	return (i);
}
