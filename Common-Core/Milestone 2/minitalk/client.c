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

static void	send_message(int target_pid, char *message)
{
	int	bit_position;
	char	ch;

	while (*message)
	{
		ch = *message;
		bit_position = sizeof(char) * 8;
		while (bit_position--)
		{
			if ((ch >> bit_position) & 1)
				kill(target_pid, SIGUSR1);
			else
				kill(target_pid, SIGUSR2);
			usleep(300);
		}
		message++;
	}
}

int	main(int argc, char **argv)
{
	int	target_pid;

	if (argc != 3)
	{
		ft_printf("Usage: ./client <server_pid> <message>\n");
		exit (1);
	}
	target_pid = ft_atoi(argv[1]);
	if (kill(target_pid, 0))
	{
		ft_printf("Invalid PID\n");
		exit(1);
	}
	send_message(target_pid, "Client: ");
	send_message(target_pid, argv[2]);
	send_message(target_pid, "\n");
}
