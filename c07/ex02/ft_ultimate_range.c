/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:53:27 by cacarval          #+#    #+#             */
/*   Updated: 2023/02/23 12:53:29 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;
	if (min >= max) 
	{
		tab = NULL;
    	return (0);
	}
	if(!(tab = (int*)malloc(sizeof(*tab) * (max - min))))
		return(-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return(i);
}

int main(void)
{	int *tab;
	int min;
	int max;
	int size;
	int i;
	
	i = 0;
	min = -45000;
	max = 45000;

	size = ft_ultimate_range(&tab,min,max);
	while(i < size)
	{
    printf("%d, ", tab[i]);
		i++;
	}
	return 0;
}