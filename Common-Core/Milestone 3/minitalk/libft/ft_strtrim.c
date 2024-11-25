/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:31:33 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 09:31:37 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start_str(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i++;
	}
	return (i);
}

static int	ft_end_str(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	while (i > 0)
	{
		if (!ft_strchr(set, s1[i - 1]))
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = ft_start_str(s1, set);
	end = ft_end_str(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char s1[] = "   ***Happy day!***   ";
	char set[] = " *";
	char *result;
	
	printf("Original: %s\n", s1);

	result = ft_strtrim(s1, set);
	if (result)
	{
		printf("Trimmed string: '%s'\n", result);
		free(result);
	}
	return (0);
}*/
/*
output: Original:    ***Happy day!***   
	Trimmed string: 'Happy day!'
*/
