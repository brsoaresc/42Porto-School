/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 07:25:15 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/15 07:29:45 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_is_numeric(char *str)
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
		if (!((str[a] >= 48) && (str[a] <= 57)))
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
	char	str[] = "0002";
	
	printf("Resultado: %d\n", ft_str_is_numeric(str));
	return(0);
}
*/
