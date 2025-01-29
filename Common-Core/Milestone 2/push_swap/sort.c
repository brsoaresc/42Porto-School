/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:09:59 by brsoares          #+#    #+#             */
/*   Updated: 2025/01/09 10:10:01 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_numbers(t_stacks *stacks)
{
	if (stacks->a[2] != 2)
	{
		if (stacks->a[0] == 2)
			rotate(stacks->a, stacks->a_size, "up", "a");
		else
			rotate(stacks->a, stacks->a_size, "down", "a");
	}
	if (stacks->a[0] > stacks->a[1])
		swap("sa", stacks->a, stacks->a_size);
}

void	sort_four_or_five_numbers(t_stacks *stacks)
{
	while (stacks->b_size <= 1)
	{
		if (stacks->a[0] == 0 || stacks->a[0] == 1)
			push("pb", stacks);
		else
			rotate(stacks->a, stacks->a_size, "up", "a");
	}
	if (stacks->b[0] == 0)
		swap("sb", stacks->b, stacks->b_size);
	if (stacks->a[2] != 4)
	{
		if (stacks->a[0] == 4)
			rotate(stacks->a, stacks->a_size, "up", "a");
		else
			rotate(stacks->a, stacks->a_size, "down", "a");
	}
	if (stacks->a[0] > stacks->a[1])
		swap("sa", stacks->a, stacks->a_size);
	push("pa", stacks);
	push("pa", stacks);
}

int	is_stack_sorted(t_stacks *stacks)
{
	int	i;

	i = 0;
	while (i < stacks->a_size - 1)
	{
		if (stacks->a[i] > stacks->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	cleanup_and_exit(t_stacks *stacks, const char *error_message)
{
	if (error_message)
		write(2, error_message, ft_strlen(error_message));
	if (stacks)
	{
		free(stacks->a);
		free(stacks->b);
		free(stacks->join_args);
		free(stacks);
	}
	exit(1);
}
