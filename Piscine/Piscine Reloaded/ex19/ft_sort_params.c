/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:08:28 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/14 16:36:35 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char *a[], char *b[])
{
	char	*aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	sort(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
		i = 1;
		argc--;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	sort(argc, argv);
	a = 1;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
