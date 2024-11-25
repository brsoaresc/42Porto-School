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

void	handle_signal(int signal, siginfo_t *info, void *context)
{
	static int bit = 0;
	static unsigned char ch = 0;

    (void)context;

	if (signal == SIGUSR1)
		ch |= (1 << (7 - bit));
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
	struct sigaction sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = handle_signal;
	sigemptyset(&sa.sa_mask);

	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);

	ft_printf("Server PID: %d\n", getpid());

	while (1)
		pause();
	return (0);
}
