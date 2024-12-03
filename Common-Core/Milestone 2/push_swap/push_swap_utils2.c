/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:49:12 by brsoares          #+#    #+#             */
/*   Updated: 2024/11/30 13:51:16 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/libft.h>

void	ps_swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (stack->size < 2)
		return (0);
	first = stack->top;
	second = first->next;
	first->next = second->next;
	second->next = first;
	stack->top = second;
}

void	ps_rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*current;

	if (stack->size < 2)
		return (0);
	first = stack->top;
	current = stack->top;
	while (current->next)
		current = current->next;
	stack->top = first->next;
	first->next = NULL;
	current->next = first;
}

void	ps_reverse_rotate(t_stack *stack)
{
	t_node	*current;
	t_node	*prev;

	if (stack->size < 2)
		return (0);
	current = stack->top;
	prev = NULL;
	while (current->next)
	{
		prev = current;
		current = current->next;
	}
	current->next = stack->top;
	stack->top = current;
	prev->next = NULL;
}

void	ps_push_to_stack(t_stack *src, t_stack *dest)
{
	int	value;

	if (!src->top)
		return (0);
	value = ps_pop(src);
	ps_push(dest, value);
}
