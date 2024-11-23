/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:16:19 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/16 12:50:50 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a; //integrador, abrange inteiros de maior tamanho

	a = 0; //comeca a contar da posicao 0
	while ((src[a] != '\0') && (a < n)) //(a < n) garante que nao copiamos mais que n caracteres
	{
		dest[a] = src[a]; //copia para o destino o quem tem na origem
		a++; //continua a percorrer a string, proxima posicao
	}
	while (a < n) //continua enquanto for maior que n
	{
		dest[a] = '\0'; // se a string tiver menos que n caracteres, o loop preenche com nulo
		a++; //continua a percorrer a string, proxima posicao
	}
	return (dest); //devolve o ponteiro da string de destino ao chamador, permitindo acesso a sting copiada
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Bruna";
	char	dest[] = "Soares";

	printf("Before: %s, e %s\n", src, dest);

	ft_strncpy(dest, src, 55);
	
	printf("After: %s, e %s\n", src, dest);
	return (0);
}
*/
