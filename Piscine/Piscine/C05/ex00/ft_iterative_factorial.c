/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:39:06 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/18 10:43:20 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		a *= nb--;
	return (a);
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_factorial(32));
	printf("%i\n", ft_iterative_factorial(33));
	printf("%i\n", ft_iterative_factorial(34));
}

