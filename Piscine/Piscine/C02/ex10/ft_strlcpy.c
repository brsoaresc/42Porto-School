/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:48:19 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/17 20:58:46 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a; //integrador, conta os caracteres
	unsigned int	b; //integardor, percorre e copia os caracteres

	a = 0;
	b = 0;
	while (src[a] != '\0') //percorre a string ate encontar o nulo
		a++;
	if (size != 0) //se o tamanho for diferente de 0, entra no loop
	{
		while (src[b] != '\0' && b < (size -1))
//assegura que nao seram copiados mais caracteres do que permitido por size,
//ja deixando espaco par o nulo
		{
			dest[b] = src[b];
			i++;
		}
		dest[b] = '\0';
	}
	return (a);
}
