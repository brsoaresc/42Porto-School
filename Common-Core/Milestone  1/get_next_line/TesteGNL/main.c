#include <fcntl.h>  // Para a função open()
#include <stdio.h>  // Para printf()
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;

    // Abre o arquivo em modo leitura
    fd = open("1char.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Erro ao abrir o arquivo");
        return (1);
    }

    // Lê e imprime cada linha
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    // Fecha o arquivo
    close(fd);
    return (0);
}

