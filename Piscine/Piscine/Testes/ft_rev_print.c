int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_rev_print(char *str)
{
	int	i;
	
	i = ft_strlen(str);
	while (i >= 0)
	{
		i--;
		write(1, &str[i], 1);
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "Bruna";
	printf("%s", ft_rev_print(str));
	return (0);
}
		
