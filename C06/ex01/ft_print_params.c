/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:41:09 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/21 11:10:17 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//a funcao imprime so os parametros passados

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	a; //integrador de argumentos
	int	b; //integrador dos caracteres de cada argumentos

	a = 1; //inicia no argumento 1, argv[1]
	b = 0; //comeca a contar da posicao 0
	if (argc > 1) //verifica se ha mais de um argumento
	{
		while (a < argc) //percore todos argumentos
		{
			b = 0; //antes de comecar cada novo argumento reseta o b para 0
			while (argv[a][b] != '\0') //percorre cada caracter da string argv[a], ate o \0 argv[b]
			{
				write (1, &argv[a][b], 1); 
				b++; //para para o proximo caracter do argumento atual
			}
			write (1, "\n", 1); //quebra de linha para separar os argumentos
			a++; //move para o proximo arguemento
		}
	}
	return (0); //se o numero de argumetos for menor que 0, retorna 0
}
