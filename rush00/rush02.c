/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:57:03 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/04 14:59:54 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	print_line(int x, int y, int a, int b)
{
	if (b == 0 || b == y - 1) //verifica se tem mais colunas
	{
		if (a == 0 || a == x - 1)  // verificamos se estamos no inicio ou no fim da linha
		{
			if (b == 0)
				ft_putchar('A');
			else
				ft_putchar('C');
		}
		else
			ft_putchar('B');
	}
	else
	{
		if (a == 0 || a == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 0;
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			print_line(x, y, a, b);
			a++;
		}
		if (x > 0)
			ft_putchar('\n');
		b++;
	}
}