/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:15:12 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/14 08:25:52 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src) //Declara que a funcao retorna um ponteiro
{
	int	i; //integrador (contador de indice)

	i = 0; //comeca em 0 para comecar da primeira letra/numero
	while (src[i] != '\0') //enquanto src for diferente de nulo(fim da string)
	{
		dest[i] = src[i]; //copia para o destino o quem tem na origem
		i++; //continua a percorrer a string, proxima posicao
	}
	dest[i] = '\0'; //adiciona o nulo no destino, dando fim a string
	return (dest); //devolve o ponteiro da string de destino ao chamador, permitindo acesso a sting copiada
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Bruna";
	char	str2[] = "Cassola";

	printf("Before str1 = %s e str2 = %s\n", str1, str2);
	
	ft_strcpy(str1, str2);
	
	printf("After str1 = %s e str2 = %s", str1 ,str2);
	return (0);
}
*/
