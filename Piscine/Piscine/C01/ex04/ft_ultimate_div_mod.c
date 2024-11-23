/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 08:14:06 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/13 09:04:08 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 10;
	int	b = 3;
	

	ft_ultimate_div_mod(&a, &b);
	printf ("a: %i, b: %i", a, b);
	return (0);
}
*/
