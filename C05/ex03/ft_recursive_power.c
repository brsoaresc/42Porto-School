/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:14:26 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/18 11:27:12 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power -1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_recursive_power(-4, 4));
	printf("%i\n", ft_recursive_power(0, 0));
	printf("%i\n", ft_recursive_power(4, 4));
}
*/
