/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extension.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:49:43 by brsoares          #+#    #+#             */
/*   Updated: 2025/02/11 18:49:54 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_extension(char *file)
{
	size_t	len;

	if (!file)
		ft_kill(1, NULL);
	len = ft_strlen(file);
	if (len < 4 || ft_strcmp(file + len - 4, ".ber") != 0)
		ft_kill(1, NULL);
}
