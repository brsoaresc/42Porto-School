/*
Assignment name: ft_strspn
Expected file: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
*/

// strspn: Mede o comprimento do prefixo com caracteres válidos.

#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
	size_t	i = 0;
	size_t	j;
	int	found;

	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (!found)
			return i;
		i++;
	}
	return i;
}
