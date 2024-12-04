/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:34:27 by brsoares          #+#    #+#             */
/*   Updated: 2024/12/04 11:34:29 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libft/libft.h>

int	ps_find_min(t_stack *stack)
{
	t_node	*current;
	int		min;

	current = stack->top;
	min = current->value;
	while (current)
	{
		if (current->value < min)
			min = current->value;
		current = current->next;
	}
	return (min);
}

void	ps_move_min_to_top(t_stack *stack)
{
	int			min;
	int			position;
	t_node		*current;

	min = find_min(stack);
	current = stack->top;
	position = 0;
	while (current && current->value != min)
	{
		current = current->next;
		position++;
	}
	if (position <= stack->size / 2)
	{
		while (stack->top->value != min)
			ps_rotate(stack);
	}
	else
	{#include "push_swap.h"
	t_node	*current;
	int		min;

	current = stack->top;
	min = current->value;
	while (current)
	{
		if (current->value < min)
			min = current->value;
		current = current->next;
	}
	return (min);
}

void	ps_move_min_to_top(t_stack *stack)
{
	int	min;
	t_node		*current;
	int	position;

	min = find_min(stack);
	current = stack->top;
	position = 0;
	while (current && current->value != min)
	{
		current = current->next;
		position++;
	}
	if (position <= stack->size / 2)
	{
		while (stack->top->value != min)
			ps_rotate(stack);
	}
	else
	{
		while (stack->top->value != min)
			ps_reverse_rotate(stack);
	}
}

void	ps_sort_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (ps_is_sorted(stack_a))
		return (0);
	while (stack_a->size > 3)
	{
		ps_move_min_to_top(stack_a);
		ps_push_to_stack(stack_a, stack_b);
	}
	if (!ps_is_sorted(stack_a))
	{
		if (stack_a->top->value > stack_a->top->next->value)
			ps_swap(stack_a);
		if (!ps_is_sorted(stack_a))
			ps_rotate(stack_a)
		if (!ps_is_sorted(stack_a))
			ps_reverse_rotate(stack_a);
	}
	while (stack_b->size > 0)
		ps_push_to_stack(stack_b, stack_a);
}

		while (stack->top->value != min)
			ps_reverse_rotate(stack);
	}
}

void	ps_sort_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (ps_is_sorted(stack_a))
		return (0);
	while (stack_a->size > 3)
	{
		ps_move_min_to_top(stack_a);
		ps_push_to_stack(stack_a, stack_b);
	}
	if (!ps_is_sorted(stack_a))
	{
		if (stack_a->top->value > stack_a->top->next->value)
			ps_swap(stack_a);
		if (!ps_is_sorted(stack_a))
			ps_rotate(stack_a)
			if (!ps_is_sorted(stack_a))
			ps_reverse_rotate(stack_a);
	}
	while (stack_b->size > 0)
		ps_push_to_stack(stack_b, stack_a);
}
