/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 07:59:52 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 07:59:56 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*ptr;
	size_t			total_size;
	size_t			i;

	total_size = number * size;
	if (number != 0 && total_size / number != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int *arr;
	size_t number = 3;
	arr = (int *)ft_calloc(number, sizeof(int));
	if (!arr)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	size_t i = 0;
	while (i < number)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	free(arr);
	return (0);
}
*/
//output: 0 0 0
