/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:27:10 by brsoares          #+#    #+#             */
/*   Updated: 2025/01/24 11:27:12 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	process_stack_b(t_stacks *stacks, int bit_position)
{
	int	b_size;

	b_size = stacks->b_size;
	while (b_size-- && !is_stack_sorted(stacks))
	{
		if (((stacks->b[0] >> bit_position) & 1) == 0)
			rotate(stacks->b, stacks->b_size, "up", "b");
		else
			push("pa", stacks);
	}
}

static void	radix_sort_helper(t_stacks *stacks, int bit_position, int bit_size)
{
	int	size;

	while (bit_position <= bit_size)
	{
		size = stacks->a_size;
		while (size-- && !is_stack_sorted(stacks))
		{
			if (((stacks->a[0] >> bit_position) & 1) == 0)
				push("pb", stacks);
			else
				rotate(stacks->a, stacks->a_size, "up", "a");
		}
		process_stack_b(stacks, bit_position + 1);
		bit_position++;
	}
}

void	radix_sort(t_stacks *stacks)
{
	int	bit_size;
	int	size;

	bit_size = 0;
	size = stacks->a_size;
	while (size > 1)
	{
		size /= 2;
		bit_size++;
	}
	radix_sort_helper(stacks, 0, bit_size);
	while (stacks->b_size != 0)
		push("pa", stacks);
}
