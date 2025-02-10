/*
Assignment name: union
Expected files: union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

#include <unistd.h>

int	check_double(char *str, char ch, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if(argc == 3)
	{
		while(argv[1][i])
		{
			if(!check_double(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		while(argv[2][j])
		{
			if(!check_double(argv[2], argv[2][j], j) 
					&& !check_double(argv[1], argv[2][j], j))
                                write(1, &argv[2][j], 1);
                        j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
