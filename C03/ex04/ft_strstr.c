/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:29:04 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/16 10:43:33 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b] && str[a + b] != '\0')
//str[a+b] a representa a posicao atual de str onde a comparcao com to_find comeca
//b representa subtring de to_find, compara as duas simultaneamente
		{
			if (to_find[b + 1] == '\0')
//acessa o proximo caracter de to_find, caracter seguinte ao ultimo caracter comparado e verifica se e igual a nulo
				return (&str[a]); 
//retorna um ponteiro para o indice a en str(ou seja, o inicio da substring encontrada dentro de str)
			b++;
		}
		a++;
	}
	return (0); //retorna 0, se a substring nao for encontrada
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "BrunaSoaresCassola";
	char to_find[] = "Cass";

	printf ("%s\n", ft_strstr(str, to_find));

	return (0);
}
*/
