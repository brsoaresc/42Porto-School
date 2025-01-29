/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:10:16 by brsoares          #+#    #+#             */
/*   Updated: 2025/01/09 10:10:18 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sorted_and_unique(t_stacks *stacks, int check_type)
{
	int	i;
	int	j;

	i = 0;
	if (check_type == 0)
	{
		while (i < stacks->a_size)
		{
			j = i + 1;
			while (j < stacks->a_size)
			{
				if (stacks->a[i] == stacks->a[j])
					cleanup_and_exit(stacks, "Error\n");
				j++;
			}
			i++;
		}
	}
	if (is_stack_sorted(stacks))
		cleanup_and_exit(stacks, NULL);
}

void	parse_and_store_numbers(t_stacks *stacks)
{
	char	**number_strings;
	int		index;

	index = 0;
	number_strings = ft_split(stacks->join_args, ' ');
	while (number_strings[index] != NULL && number_strings[index][0] != '\0')
	{
		stacks->a[index] = ft_atoi_ps(number_strings[index], stacks);
		free(number_strings[index]);
		index++;
	}
	free(number_strings);
}

void	allocate_stacks(int argc, char **argv, t_stacks *stacks)
{
	int	i;

	i = 1;
	stacks->a_size = 0;
	stacks->b_size = 0;
	while (i < argc)
	{
		if (ft_count_substr(argv[i], ' '))
			stacks->a_size += ft_count_substr(argv[i], ' ');
		else
			stacks->a_size++;
		i++;
	}
	stacks->a = malloc(stacks->a_size * sizeof(int));
	if (stacks->a == NULL)
		cleanup_and_exit(stacks, "Error\n");
	stacks->b = malloc(stacks->a_size * sizeof(int));
	if (stacks->b == NULL)
		cleanup_and_exit(stacks, "Error\n");
}

static void	populate_indexed_array(int *indexed_array, t_stacks *stacks)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (i < stacks->a_size)
	{
		count = 0;
		j = 0;
		while (j < stacks->a_size)
		{
			if (stacks->a[i] > stacks->a[j])
				count++;
			j++;
		}
		indexed_array[i] = count;
		i++;
	}
}

void	create_indexed_array(t_stacks *stacks)
{
	int	*indexed_array;
	int	i;

	indexed_array = malloc(stacks->a_size * sizeof(int));
	if (indexed_array == NULL)
		cleanup_and_exit(stacks, "Error\n");
	populate_indexed_array(indexed_array, stacks);
	i = 0;
	while (i < stacks->a_size)
	{
		stacks->a[i] = indexed_array[i];
		i++;
	}
	free(indexed_array);
}
