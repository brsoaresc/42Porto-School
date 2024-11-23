#include <signal.h>
#include "libft/libft.h"

void	send_char(int pid, char *str)
{
	int	i;
	int	bit;

	i = 0;
	while (str[i] != '\0')
	{
		bit = 7;
		while (bit >= 0)
		{
			if (str[i] & (1 << bit))
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			bit--;
			usleep(400);
		}
		i++;
	}
	bit = 7;
	while (bit >= 0)
	{
		kill(pid, SIGUSR2);
		usleep(400);
		bit--;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
	{
		printf("Usage: ./client <PID> <message>\n");
		return (1);
	}
	pid = atoi(argv[1]);
	if (pid <= 0)
	{
		printf("Invalid PID\n");
		return (1);
	}
	send_char(pid, argv[2]);
	return (0);
}