/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 07:30:29 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/15 07:33:51 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_is_lowercase(char *str)
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
		if (!((str[a] >= 97) && (str[a] <= 122)))
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
	char	str[] = "bruna";
	
	printf("Resultado: %d\n", ft_str_is_lowercase(str));
	return(0);
}
*/
