/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:31:06 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/16 19:58:24 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//a funcao ranger cria um array de inteiros contendo todos os valores entre min e max

#include <stdlib.h> //biblioteca para acesso ao malloc

int	*ft_range(int min, int max) //retorna um ponteiro para um array de inteiros
{
	int	i; //integrador para preencher o array
	int	*array; //ponteiro para o início do bloco de memória alocado dinamicamente, onde será armazenado o intervalo de números

	if (min >= max) //garante que o valor de min seja sempre menor que max
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
//(int *) faz um cast para o tipo int *, já que malloc() retorna um ponteiro genérico (void *).
//sizeof(int) retorna o tamanho em bytes de um inteiro.
//max - min e o número total de elementos que o array deverá conter. Por exemplo, se min = 3 e max = 7, o intervalo seria [3, 4, 5, 6], contendo 4 elementos
	if (array == NULL) //verificação para garantir que a alocação de memória foi feita.
		return (NULL); //se falhou retorna NULL
	i = 0; //inicia o índice do array
	while (min < max) //percorre os números de min até max - 1. Em cada iteração, o valor atual de min é colocado na posição i do array, e tanto min quanto i são incrementados
	{
		array[i] = min; //atribui o valor de min à posição atual i do array
		min++;
		i++;
	}
	return (array); //retorna o ponteiro para o array criado
}
/*
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int	*range;

	range = ft_range(0, 9);
	while (i < 9)
	{
		printf("%d", range[i]);
		i++;
	}

}
*/
