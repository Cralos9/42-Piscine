/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:46:27 by cacarval          #+#    #+#             */
/*   Updated: 2023/02/07 12:19:58 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while (size-- > 0)
	{
		temp = 0;
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				temp = 1;
			}
			i++;
		}
	}
}

// int main(void) 
// {
//     int tab[9] = {9, 5, 2, 3, 8, 4, 16, 20, 24};
//     ft_sort_int_tab(tab, 9);
//     int i =0;
//     while (i < 9)
// 	{
//         printf("%d ", tab[i]);
// 		i++;
// 	}
// }
