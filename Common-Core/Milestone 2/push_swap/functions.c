/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:08:49 by brsoares          #+#    #+#             */
/*   Updated: 2025/01/09 10:08:51 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(char *operation, int *stack, int size)
{
	int	temp;

	if (size <= 1)
		return ;
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	ft_putendl_fd(operation, 1);
}

static void	push_move_elements(int *source, int *destination, int *src_size,
		int *dst_size)
{
	int	temp;

	temp = source[0];
	ft_memmove(destination + 1, destination, sizeof(int) * (*dst_size));
	destination[0] = temp;
	(*src_size)--;
	ft_memmove(source, source + 1, sizeof(int) * (*src_size));
	(*dst_size)++;
}

void	push(char *operation, t_stacks *stacks)
{
	int	*source;
	int	*destination;
	int	*src_size;
	int	*dst_size;

	if (ft_strncmp(operation, "pa", 3) == 0)
	{
		source = stacks->b;
		destination = stacks->a;
		src_size = &stacks->b_size;
		dst_size = &stacks->a_size;
	}
	else if (ft_strncmp(operation, "pb", 3) == 0)
	{
		source = stacks->a;
		destination = stacks->b;
		src_size = &stacks->a_size;
		dst_size = &stacks->b_size;
	}
	else
		return ;
	if (*src_size > 0)
		push_move_elements(source, destination, src_size, dst_size);
	ft_putendl_fd(operation, 1);
}

void	rotate(int *stack, int size, const char *direction, char *operation)
{
	int	temp;

	if (size <= 1)
		return ;
	if (ft_strncmp(direction, "up", 3) == 0)
	{
		temp = stack[0];
		ft_memmove(stack, stack + 1, sizeof(int) * (size - 1));
		stack[size - 1] = temp;
		write(1, "r", 1);
	}
	else if (ft_strncmp(direction, "down", 4) == 0)
	{
		temp = stack[size - 1];
		ft_memmove(stack + 1, stack, sizeof(int) * (size - 1));
		stack[0] = temp;
		write(1, "rr", 2);
	}
	ft_putendl_fd(operation, 1);
}
