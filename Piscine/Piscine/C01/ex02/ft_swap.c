/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:46:24 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/13 07:22:16 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	troca;

	troca = *a;
	*a = *b;
	*b = troca;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 5;
	int b = 10;
	
	printf("Antes a: %i, e b: %i\n", a, b);
	ft_swap(&a, &b);
	printf("Depois a: %i e b: %i", a, b);
	return (0);
}
*/
