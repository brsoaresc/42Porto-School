/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:36:56 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/14 16:37:32 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //biblioteca para acesso ao malloc

char	*ft_strdup(char *src)
{
	int		len; //armazena o comprimento da string original (src)
	int		i;   //integrador no loop para copiar os caracteres
	char	*dest;       //e o ponteiro para o espaço de memória onde será armazenada a nova string copiada
	
	len = 0; //inicia o comprimento como 0
	while (src[len] != '\0') //percorre a string caractere por caractere até encontrar \0
	{
		len++;
	}
	dest = (char *) malloc(sizeof(char) * (len + 1));
//Essa linha aloca memória dinamicamente para a nova string dest. O tamanho alocado é len + 1 bytes, onde len é o comprimento da string original e o +1 é para o 
//caractere nulo \0 que marca o final da nova string
//(char *) indica que estamos convertendo o ponteiro retornado por malloc() para o tipo char *. sizeof(char) e o tamanho de um caractere em bytes
//malloc() aloca uma quantidade especificada de memória e retorna um ponteiro para ela
	if (dest == NULL) //verificação para garantir que a alocação de memória foi feita
	{
		return(NULL); //se falhou retorna NULL
	}
	while (src[i] != '\0') //copia cada caractere da string original src para a nova string dest
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
