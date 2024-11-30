/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:47:21 by brsoares          #+#    #+#             */
/*   Updated: 2024/11/25 10:04:23 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "libft/libft.h"

void	send_bit(int target_pid, unsigned char ch)
{
	int	bit_position;

	bit_position = 7;
	while (bit_position >= 0)
	{
		if ((ch >> bit_position) & 1)
		{
			ft_printf("Enviando SIGUSR2 (1) para PID %d\n", target_pid);
			kill(target_pid, SIGUSR2);
		}
		else
		{
			ft_printf("Enviando SIGUSR1 (0) para PID %d\n", target_pid);
			kill(target_pid, SIGUSR1);
		}
		usleep(300);
		bit_position--;
	}
}

void	send_message(int target_pid, const char *message)
{
	size_t		i;

	i = 0;
	while (message[i])
	{
		send_bit(target_pid, message[i]);
		i++;
	}
	send_bit(target_pid, '\0');
}

int	main(int argc, char **argv)
{
	int	target_pid;

	if (argc != 3)
	{
		ft_printf("Usage: ./client <server_pid> <message>\n");
		return (1);
	}
	target_pid = ft_atoi(argv[1]);
	send_message(target_pid, argv[2]);
	return (0);
}
