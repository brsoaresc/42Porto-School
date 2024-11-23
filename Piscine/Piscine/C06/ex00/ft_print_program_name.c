/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:40:44 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/21 11:03:04 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//a funcao imprime o nome do arquivo (argv[0])

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	a; //integrador de argumentos

	a = 0; //comeca a contar da posicao 0
	if (argc > 0) //verifica se o numero de argumentos e maior que 0
	{
		while (argv[0][a] != '\0') //percorre ate o fim da string
		{
			write (1, &argv[0][a], 1); //imprime o nome, caracter por caracter
			a++; //continua a percorrer a string, proxima posicao
		}
		write (1, "\n", 1); //adiciona quebra de linha
	}
	return (0); //se o numero de argumetos for menor que 0, retorna 0
}
