/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:44:08 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 09:44:10 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_substr(char const *str, char ch)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != ch)
		{
			count++;
			while (str[i] != ch && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_len_substr(char const *str, char ch, int i)
{
	int	len;

	len = 0;
	while (str[i] != ch && str[i])
	{
		i++;
		len++;
	}
	return (len);
}

static void	ft_free_memory(char **arr, int i)
{
	while (--i >= 0)
		free(arr[i]);
	free(arr);
}

static char	*ft_extract_substr(char const *str, int i, char ch)
{
	char	*substr;
	int		substr_len;

	substr_len = ft_len_substr(str, ch, i);
	substr = ft_substr(str, i, substr_len);
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	int		substr;
	int		i;
	int		j;
	char	**arr;

	if (!s)
		return (NULL);
	substr = ft_count_substr(s, c);
	arr = (char **)malloc((substr + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (j < substr)
	{
		while (s[i] == c)
			i++;
		arr[j] = ft_extract_substr(s, i, c);
		if (!arr[j])
			return (ft_free_memory(arr, j), NULL);
		i += ft_len_substr(s, c, i);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char **result;
	result = ft_split("Happy day 42", ' ');
	printf("Word 1: %s\n", result[0]);
	printf("Word 2: %s\n", result[1]);
	printf("Word 3: %s\n", result[2]);
	return (0);
}*/
/*
output: Word 1: Happy
	Word 2: day
	Word 3: 42
*/
