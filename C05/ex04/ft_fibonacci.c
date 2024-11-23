/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:28:46 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/18 11:36:13 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	a;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		a = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (a);
	}
	else
		return (-1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(5));
	printf("%i\n", ft_fibonacci(10));
}
*/
