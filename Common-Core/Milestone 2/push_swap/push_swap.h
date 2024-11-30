/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:05:10 by brsoares          #+#    #+#             */
/*   Updated: 2024/11/30 13:05:14 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <libft/libft.h>

typedef struct s_node
{
	int		value;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

//manipulação das pilhas
t_stack		*ps_create_stack(void);
void		ps_free_stack(t_stack *stack);
void		ps_push(t_stack *stack, int value);
int			ps_pop(t_stack *stack);
void		ps_swap(t_stack *stack);
void		ps_rotate(t_stack *stack);
void		ps_reverse_rotate(t_stack *stack);

//operações entre as pilhas
void		ps_push_to_stack(t_stack *src, t_stack *dest);

//uteis
int			ps_sorted(t_stack *stack);
void		ps_print_stack(t_stack *stack);
void		ps_error_exit(const char *message);

//algoritmo
void		ps_sort_stack(t_stack *stack_a, t_stack *stack_b);

#endif
