/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:17:34 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/16 20:17:37 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H    //verifica se o identificador FT_POINT_H ainda não foi definido
# define FT_POINT_H   //define o identificador FT_POINT_H

typedef struct t_point
{
	int	x;
	int	y;
}	t_point;

#endif //fecha o header guard, finalizando a verificação que começou com #ifndef

//explicacao do comando typedef struct t_point
//typedef usado para criar um apelido para um tipo de dado. Nesse caso, estamos criando um apelido para a estrutura que definiremos
//struct t_point define uma estrutura chamada t_point. Uma estrutura (struct) é um tipo de dado que pode armazenar múltiplos valores 
//de diferentes tipos em um só objeto, a estrutura armazena dois valores inteiros, x e y, representando as coordenadas de um ponto
//int x; int y; são os campos da estrutura, x e y são inteiros que armazenarão as coordenadas do ponto
//} t_point; o typedef permite que a estrutura seja referenciada diretamente como t_point, em vez de struct t_point. Isso facilita a 
//declaração de variáveis usando essa estrutura
