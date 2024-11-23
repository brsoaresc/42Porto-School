/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:50:20 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/29 09:52:34 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	printf_putchar(char ch);
int	printf_putstr(char *str);
int	printf_putptr(unsigned long ptr);
int	printf_address(unsigned long addr);
int	printf_putnbr(int number);
int	printf_putnbr_unsigned(unsigned int number);
int	printf_putnbr_hex(unsigned int number, int lowercase);

#endif