/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:13:11 by cacarval          #+#    #+#             */
/*   Updated: 2023/02/07 11:50:47 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		s = tab[i];
		tab[i] = tab[j];
		tab[j] = s;
		i++;
		j--;
	}
}

// int main (void)
// {
//     int tab[9] = {9, 5, 2, 3, 8, 4, 16, 20, 24};
//     ft_rev_int_tab(tab, 9);
//     int i =0;
//     while (i < 9)
// 	{
//         printf("%d ", tab[i]);
// 		i++;
// 	}
// }