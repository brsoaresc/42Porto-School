/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:59:36 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/17 12:06:05 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n; //o long consegue lidar com numeros extensos, pois ocupa mais espaco na memoria

	n = nb; //n agora tem o valor de nb, podendo lidar com numeros maiores
	if (n < 0) //verifica se o numero e negativo
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10) 
	{
		ft_putnbr (n / 10);
	}
	n = n % 10 + '0';
	write (1, &n, 1);
}
/*
int	main(void)
{
	ft_putnbr(-123);
	return (0);
}
*/
