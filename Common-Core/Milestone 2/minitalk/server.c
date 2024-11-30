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

void	handle_signal(int signal, siginfo_t *info, void *extra)
{
	static int		bit;
	static unsigned char	ch;

	(void)extra;
	if (signal == SIGUSR2)
		ch = ch | (1 << (7 - bit));
	bit++;
	if (bit == 8)
	{
		if (ch == '\0')
			ft_printf("\n");
		else
			ft_printf("%c", ch);
		bit = 0;
		ch = 0;
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sig;
	{
		sig.sa_flags = SA_SIGINFO;
		sig.sa_sigaction = handle_signal;
		sigemptyset(&sig.sa_mask);
		sigaction(SIGUSR1, &sig, NULL);
		sigaction(SIGUSR2, &sig, NULL);
	}
	ft_printf("Server PID: %d\n", getpid());
	while (1)
		pause();
	return (0);
}
