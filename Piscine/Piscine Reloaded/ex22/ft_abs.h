/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:01:25 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/16 20:04:52 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H   //verifica se o identificador FT_ABS_H ainda não foi definido
# define FT_ABS_H  //define o identificador FT_ABS_H

//quando você coloca esses comandos no topo de um arquivo de cabeçalho, ele será incluído apenas uma vez durante a compilação, 
//evitando problemas de múltipla inclusão

# define ABS(value) ((value) * ((value) >= 0) - (value) * ((value) < 0))

#endif //fecha o header guard, finalizando a verificação que começou com #ifndef

//explicacao da linha # define ABS(value) ((value) * ((value) >= 0) - (value) * ((value) < 0))
//#define ABS(value) cria uma macro chamada ABS que aceita um parâmetro value
//(value) >= 0 verifica se value é positivo ou zero
//(value) < 0 verifica se value é negativo

//Se value for positivo ou zero, (value) >= 0 será verdadeira (1), e (value) < 0 será falsa (0). Isso resulta em (value) ∗ 1 − (value) ∗ 0 = value, 
//o valor permanece o mesmo
//Se value for negativo, (value) >= 0 será falsa (0), e a expressão (value) < 0 será verdadeira (1). Isso resulta em (value) ∗ 0 - (value) ∗ 1= − value, 
//o valor negativo se torna positivo, o que efetivamente transforma o número em seu valor absoluto
