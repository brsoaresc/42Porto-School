/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:09:40 by brsoares          #+#    #+#             */
/*   Updated: 2025/01/09 10:09:42 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stacks
{
	int		*a;
	int		*b;
	int		a_size;
	int		b_size;
	char	*join_args;
}	t_stacks;

void	rotate(int *stack, int size, const char *direction, char *operation);
void	swap(char *operation, int *stack, int size);
void	push(char *operation, t_stacks *stacks);
void	sort_three_numbers(t_stacks *s);
void	sort_four_or_five_numbers(t_stacks *s);
void	radix_sort(t_stacks *s);
void	parse_and_store_numbers(t_stacks *stacks);
void	create_indexed_array(t_stacks *stacks);
void	allocate_stacks(int argc, char **argv, t_stacks *stacks);
void	cleanup_and_exit(t_stacks *stacks, const char *error_message);
void	check_sorted_and_unique(t_stacks *s, int i);
int		is_stack_sorted(t_stacks *s);
int		ft_atoi_ps(const char *str, t_stacks *stacks);

#endif
