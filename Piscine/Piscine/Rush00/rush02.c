/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rutavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:14:07 by rutavare          #+#    #+#             */
/*   Updated: 2024/09/07 11:14:12 by rutavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_line(int x, char start, char middle, char end)
{
	int	i;

	i = 1;
	if (x > 0)
		ft_putchar(start);
	while (i < x - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (x > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x <= 0 || y <= 0 || x >=100 || y >=100)
		return ;
	i = 1;
	print_line(x, 'A', 'B', 'A');
	while (i < y - 1)
	{
		print_line(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1)
		print_line(x, 'C', 'B', 'C');
}
