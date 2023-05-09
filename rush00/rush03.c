#include <unistd.h>

void	ft_putchar(char a);

void	print_line(int x, int y, int a, int b)
{
	if (b == 0 || b == y - 1) //verifica se tem mais colunas
	{
		if (a == 0 )  // verificamos se estamos no inicio ou no fim da linha
				ft_putchar('A');
		else if (a == x - 1)
				ft_putchar('C');
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