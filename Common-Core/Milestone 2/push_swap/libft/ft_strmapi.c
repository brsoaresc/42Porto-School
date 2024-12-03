/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:41:59 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 09:42:14 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char	ft_uppercase(unsigned int i, char ch)
{
	(void)i; 
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	else
		return (ch);
}

int	main(void)
{
	char	str[] = "happy!";
	char	*result;

	printf("Before: %s\n", str);

	result = ft_strmapi(str, ft_uppercase);
	if (result)
	{
		printf("After: %s\n", result);
		free(result);
	}
	return (0);
}*/
/*
output: Before: happy!
	After: HAPPY!
*/
