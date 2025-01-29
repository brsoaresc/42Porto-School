/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:27:45 by brsoares          #+#    #+#             */
/*   Updated: 2025/01/24 11:27:51 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_ps(const char *str, t_stacks *stack)
{
	int	i;
	int	sig;
	int	res;

	i = 0;
	sig = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	while (str[i])
	{
		if (res > INT_MAX / 10
			|| (res == INT_MAX / 10 && (str[i] - '0') > INT_MAX % 10))
			cleanup_and_exit(stack, "Error\n");
		if (!(str[i] >= '0' && str[i] <= '9'))
			cleanup_and_exit(stack, "Error\n");
		res = res * 10 + (str[i++] - '0');
	}
	return (res * sig);
}
