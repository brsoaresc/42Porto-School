/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:09:13 by brsoares          #+#    #+#             */
/*   Updated: 2025/01/09 10:09:18 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	validate_characters(const char *arg)
{
	int		j;
	char	c;
	char	next;

	j = 0;
	while (arg[j])
	{
		c = arg[j];
		next = arg[j + 1];
		if ((!ft_isdigit(c) && c != ' ' && c != '-' && c != '+'))
			cleanup_and_exit(NULL, "Error\n");
		if ((c == '-' || c == '+') && (next == '\0' || next == ' '))
			cleanup_and_exit(NULL, "Error\n");
		j++;
	}
}

static void	validate_input(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		cleanup_and_exit(NULL, "");
	i = 1;
	while (i < argc)
	{
		if (!argv[i][0] || argv[i][0] == ' ')
			cleanup_and_exit(NULL, "Error\n");
		validate_characters(argv[i]);
		i++;
	}
}

static void	concatenate_arguments(int argc, char **argv, t_stacks *stacks)
{
	char	*result;
	char	*temp;
	int		i;

	result = ft_strdup("");
	i = 1;
	while (i < argc)
	{
		temp = ft_strjoin(result, argv[i]);
		free(result);
		result = temp;
		if (i != argc - 1)
		{
			temp = ft_strjoin(result, " ");
			free(result);
			result = temp;
		}
		i++;
	}
	stacks->join_args = ft_strdup(result);
	if (!stacks->join_args)
		cleanup_and_exit(stacks, "Error\n");
	free(result);
}

static void	sort_stack(t_stacks *stacks)
{
	if (stacks->a_size == 2 && stacks->a[0] > stacks->a[1])
		swap("sa", stacks->a, stacks->a_size);
	else if (stacks->a_size == 3)
		sort_three_numbers(stacks);
	else if (stacks->a_size >= 4 && stacks->a_size <= 5)
		sort_four_or_five_numbers(stacks);
	else
		radix_sort(stacks);
}

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	validate_input(argc, argv);
	stacks = malloc(sizeof(t_stacks));
	if (!stacks)
		exit(1);
	allocate_stacks(argc, argv, stacks);
	concatenate_arguments(argc, argv, stacks);
	parse_and_store_numbers(stacks);
	check_sorted_and_unique(stacks, 0);
	create_indexed_array(stacks);
	sort_stack(stacks);
	check_sorted_and_unique(stacks, 1);
	cleanup_and_exit(stacks, NULL);
	return (0);
}
