/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:01:23 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/18 14:58:22 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a; //integrador para percorrer cada caracter da string
	int	b; //integrador para indicar o sinal do numero
	int	c; //integrador para armazenar o resultado final

	a = 0; //comeca a percorrer da posicao 0
	b = 1; //assume que inicialmente o numero e positivo
	c = 0; //inicializa o resultado com 0
	while ((str[a] >= '\t' && str[a] <= '\r') || str[a] == ' ') //pula caracteres de controle e espaco em branco
		a++;
	while (str[a] == '-' || str[a] == '+') //verifica o sinal
	{
		if (str[a] == '-') //se for negativo muda o sinal para negativo, agora int nao mais char
			b *= -1; //b = b * -1, qualquer numero vezes -1 o torna negativo
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9') //aqui e onde a convercao ocorre, enquanto houver numeros
	{
		c = (c * 10) + (str[a] - '0'); //converte o caracter para inteiro '0' e 48, e '1' e 49, subtraindo fica 1 
		//ex: 12 ... (1 + '0') + (0* 10) = c = 1 / (2 + '0') + (1* 10) = c = 12 
		a++;
	}
	return (c * b); //retorna o valor final * o sinal armazenado em b 
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: ./a.out <int number>\n");
		return(1);
	}
	else
		printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
*/
