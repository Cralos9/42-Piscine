/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:50:53 by cacarval          #+#    #+#             */
/*   Updated: 2023/02/18 15:14:22 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		j;
	int		a;

	j = 1;
	a = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = (a * 10) + (str[i] - '0');
		i++;
	}
	a *= j;
	return (a);
}

// int main (int argc, char **argv)
// {
// 	int i;	
// 	i = 1;
// 	while (i < argc)
// 	{
// 		int a=ft_atoi(argv[i]);
// 		printf("%d", a);
// 		i++;
// 	}
// 	return (0);
// }