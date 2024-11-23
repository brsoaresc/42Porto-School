/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 07:18:24 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/21 07:26:09 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_is_prime(-9));
	printf("%i\n", ft_is_prime(0));
	printf("%i\n", ft_is_prime(5));
}
*/
