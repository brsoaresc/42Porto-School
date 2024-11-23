#include <signal.h>
#include "libft/libft.h"

void send_bit(int pid, unsigned char c)
{
    int shift = 7;
    while (shift >= 0)
    {
        if ((c >> shift) & 1)
            kill(pid, SIGUSR2);
        else
            kill(pid, SIGUSR1);
        usleep(300);
        shift--;
    }
}

void send_message(int pid, const char *str)
{
    size_t i = 0;
    while (str[i])
    {
        send_bit(pid, str[i]);
        i++;
    }
    send_bit(pid, '\0'); // Envia caractere nulo
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Usage: ./client <server_pid> <message>\n");
        return 1;
    }

    int pid = atoi(argv[1]);
    if (pid <= 0)
    {
        printf("Invalid PID\n");
        return 1;
    }

    send_message(pid, argv[2]);
    return 0;
}