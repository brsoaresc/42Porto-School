/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:01:35 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/18 11:13:35 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		a *= nb;
		power--;
	}
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_power(-4, 4));
	printf("%i\n", ft_iterative_power(0, 0));
	printf("%i\n", ft_iterative_power(4, 4));
}
*/
