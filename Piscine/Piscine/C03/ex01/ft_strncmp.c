/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:29:22 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/15 10:58:59 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] || s2[a]) && (a < n))
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int	n = 4;
	char s1[] = "Bolota";
	char s2[] = "Bola";

	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
*/
