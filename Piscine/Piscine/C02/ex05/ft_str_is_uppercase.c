/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 07:34:26 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/15 07:36:12 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	if (str == NULL)
	{
		return (0);
	}
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (!((str[a] >= 65) && (str[a] <= 90)))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "BRUNA";
	
	printf("Resultado: %d\n", ft_str_is_uppercase(str));
	return(0);
}
*/
