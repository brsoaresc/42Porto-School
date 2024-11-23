/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:02:05 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/14 14:03:48 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		a *= nb--;
	return (a);
}
