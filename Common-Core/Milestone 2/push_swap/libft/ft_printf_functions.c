/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:52:42 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/29 09:52:55 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	printf_putchar(char ch)
{
	write(1, &ch, 1);
	return (1);
}

int	printf_putstr(char *str)
{
	int	i;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	printf_putptr(unsigned long ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (printf_putstr("(nil)"));
	len += printf_putstr("0x");
	len += printf_address(ptr);
	return (len);
}

int	printf_address(unsigned long addr)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (addr >= 16)
		i += printf_address(addr / 16);
	i += printf_putchar(base[addr % 16]);
	return (i);
}
