/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 07:37:44 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/15 07:49:51 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (!((str[a] >= 31) || (str[a] == 127)))
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
	char	str[] = "\f";
	
	printf("Resultado: %d\n", ft_str_is_printable(str));
	return(0);
}
*/
