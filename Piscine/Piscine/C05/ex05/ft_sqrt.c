/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:39:43 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/18 11:48:55 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	if (nb > 0)
	{
		while (a * a <= nb)
		{
			if (a * a == nb)
				return (a);
			else if (a >= 46341)
				return (0);
			a++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_sqrt(-9));
	printf("%i\n", ft_sqrt(0));
	printf("%i\n", ft_sqrt(9));
}
*/
