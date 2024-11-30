/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:43:46 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 09:43:49 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	ft_uppercase(unsigned int i, char *ch)
{
	(void)i;
	if (*ch >= 'a' && *ch <= 'z')
		*ch = *ch - 32;
}

int	main(void)
{
	char	str[] = "Happy Day!";

	ft_striteri(str, ft_uppercase);
	printf("Resultado: %s\n", str);
	return (0);
}*/
/*
output: HAPPY DAY!
*/
