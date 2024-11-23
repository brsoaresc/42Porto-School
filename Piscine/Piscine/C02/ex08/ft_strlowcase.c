/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 08:18:04 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/15 08:29:07 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 65) && (str[a] <= 90))
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}
/*
#include <stdio.h>

int     main(void)
{
        char    str[] = "BRUNA";

        printf("Before: %s\n", str);
        printf("After: %s\n", ft_strlowcase(str));
        return(0);
}
*/
