/*
Assignment name: ft_strpbrk
Expected files: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
*/

// strpbrk: Encontra o primeiro caractere correspondente.

#include <stdlib.h>

char    *ft_strpbrk(const char *s1, const char *s2)
{       
        int     i;
        int     j;

        i = 0;
        while(s1[i])
        {
                while(s2[j])
                {
                        if(s2[j] == s1[i])
                                return (s1[i]);
                        j++;
                }
                i++;
        }
        return (NULL);
}
