/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 06:58:06 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/15 06:59:01 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_is_alpha(char *str)
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
		if (!(str[a] >= 65 && str[a] <= 90) && !(str[a] >= 97 && str[a] <= 122))
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
	char	str[] = "Bruna";
	
	printf("Resultado: %d", ft_str_is_alpha(str));
}
*/
