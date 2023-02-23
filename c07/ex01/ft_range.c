/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:53:03 by cacarval          #+#    #+#             */
/*   Updated: 2023/02/23 16:09:13 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int len;

	len = max - min + 1;
	
	int *tab;
	tab = malloc(sizeof(int) * len);

	int i;
	i = 0;
	while(len > 0)
	{
		array[i] = min;
		min++;
		i++;
		len--;
	}
	return(tab);
}


// int main(void)
// {	int *tab;
// 	tab =ft_strjoin(1,5);
//     printf("%d", tab[0]);
//     return 0;
// }