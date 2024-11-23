/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:07:03 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/29 10:07:05 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_placeholder(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (type == 'p')
		return (ft_putptr(va_arg(args, unsigned long)));
	if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (type == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	if (type == 'x')
		return (ft_putnbr_hex(va_arg(args, unsigned int), 1));
	if (type == 'X')
		return (ft_putnbr_hex(va_arg(args, unsigned int), 0));
	if (type == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		result;
	int		i;
	va_list	args;

	if (!str)
		return (-1);
	va_start(args, str);
	result = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			result += ft_putchar(str[i]);
		else if (!str[++i])
			return (-1);
		else
			result += put_placeholder(str[i], args);
		i++;
	}
	va_end (args);
	return (result);
}
