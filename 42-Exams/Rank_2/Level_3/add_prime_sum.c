/*Assignment name: add_prime_sum
Expected files: add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>*/

#include <unistd.h>

int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
void	ft_putnbr(int n)
{
	long	num;
	char	ch;
	
	num = nb;
	if (nb > 9)
		ft_putnbr(num / 10);
	ch = (nb % 10) + '0';
	write(1, &ch, 1);
}
int	ft_atoi(const char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	n;
	int	sum;

	n = 0;
	sum = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n <= 0)
		{	
			write(1, "0\n", 2);
			return (0);
		}
		while (n > 0)
		{
			if (is_prime(n))
				sum += n;
			n--;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
