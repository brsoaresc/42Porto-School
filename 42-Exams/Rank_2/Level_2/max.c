/*
Assignment name: max
Expected files: max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

int	max(int* tab, unsigned int len)
{
	int	i;
	int	maxi;

	i = 1;
	maxi = tab[0];
	if(len == 0)
		return (0);
	while(i < len)
	{
		if(tab[i] > maxi)
			maxi = tab[i];
		i++;
	}
	return (maxi);

}
