/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 07:55:21 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/15 08:17:22 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 97) && (str[a] <= 122))
		{
			str[a] -= 32;
		}
		a++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Bruna";
	
	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strupcase(str));
	return(0);
}
*/
