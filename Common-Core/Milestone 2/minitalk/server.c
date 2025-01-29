/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:47:49 by brsoares          #+#    #+#             */
/*   Updated: 2024/11/25 09:48:31 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include "libft/libft.h"

static void	handle_char(char ch, char **str)
{
	char	temp[2];
	char	*new_str;

	temp[0] = ch;
	temp[1] = '\0';
	if (!*str)
		*str = ft_strdup(temp);
	else if (ch == 0)
	{
		ft_printf("%s\n", *str);
		free(*str);
		*str = NULL;
	}
	else
	{
		new_str = ft_strjoin(*str, temp);
		free(*str);
		*str = ft_strdup(new_str);
		free(new_str);
	}
}

void	handle_signal(int signal)
{
	static int	bit;
	static char	ch;
	static char	*str;

	if (signal == SIGUSR1)
		ch = ch | (1 << (7 - bit));
	if (signal == SIGUSR2)
		ch = ch & ~(1 << (7 - bit));
	bit++;
	if (bit == 8)
	{
		handle_char(ch, &str);
		bit = 0;
		ch = 0;
	}
}

int	main(void)
{
	struct sigaction	sig;
	pid_t				target_pid;

	target_pid = getpid();
	if (target_pid == -1)
	{
		ft_printf("Invalid PID\n");
		exit(1);
	}
	ft_printf("Server PID: %d\n", target_pid);
	sig.sa_flags = 0;
	sig.sa_handler = &handle_signal;
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	while (1)
		pause();
}
