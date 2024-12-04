/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:45:18 by brsoares          #+#    #+#             */
/*   Updated: 2024/11/30 13:48:21 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/libft.h>

void	ps_print_stack(t_stack *stack)
{
	t_node	*current;

	current = stack->top;
	while (current)
	{
		ft_printf("%d\n", current->value);
		current = current->next;
	}
	ft_printf("---\n");
}

int	main(void)
{
	t_stack	*a;
	t_stack	*b;

	a = create_stack();
	b = create_stack();
	push(a, 3);
	push(a, 2);
	push(a, 1);
	print_stack(a);
	swap(a);
	print_stack(a);
	free_stack(a);
	free_stack(b);
	return (0);
}
