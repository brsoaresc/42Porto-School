#include <signal.h>
#include "libft/libft.h"

void	send_char(int target_pid, char *message)
{
	int	i;
	int	bit;

	i = 0;
	while (message[i] != '\0')
	{
		bit = 7;
		while (bit >= 0)
		{
			if (message[i] & (1 << bit))
				kill(target_pid, SIGUSR1);
			else
				kill(target_pid, SIGUSR2);
			bit--;
			usleep(400);
		}
		i++;
	}
	bit = 7;
	while (bit >= 0)
	{
		kill(target_pid, SIGUSR2);
		usleep(400);
		bit--;
	}
}

int	main(int argc, char **argv)
{
	int	target_pid;

	if (argc != 3)
	{
		ft_printf("Usage: ./client <PID> <message>\n");
		return (1);
	}
	target_pid = atoi(argv[1]);
	if (target_pid <= 0)
	{
		ft_printf("Invalid PID\n");
		return (1);
	}
	send_char(target_pid, argv[2]);
	return (0);
}
