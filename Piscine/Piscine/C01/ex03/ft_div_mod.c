/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 08:44:46 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/13 07:37:22 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int     a = 10;
	int     b = 3;
	int	div;
	int	mod;


	ft_div_mod(a, b, &div, &mod);
	printf("a: %i, b: %i, div: %i, mod: %i", a, b, div, mod); 
	return (0);
}
*/
