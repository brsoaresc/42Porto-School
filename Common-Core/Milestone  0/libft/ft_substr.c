/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:41:25 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 09:41:28 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	actual_len;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	actual_len = s_len - start;
	if (len > actual_len)
		len = actual_len;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s = "Happy day Porto!";
	char *sub;
	
	printf("Original: %s\n", s);

	sub = ft_substr(s, 7, 5);
	if (sub)
	{
		printf("Substring: %s\n", sub);
		free(sub);
	}
	return (0);
}*/
/*
output: Original: Happy day Porto!
	Substring: ay Po
*/
