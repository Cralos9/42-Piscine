/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:52:37 by cacarval          #+#    #+#             */
/*   Updated: 2023/02/23 12:52:40 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>


int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}


char *ft_strdup(char *src)
{
	char *c;
	int i;
	int j;

	j = 0;
	i = ft_strlen(src);
	if((c = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
		return(NULL);
	while(j < i)
	{
		c[j] = src[j];
		j++;
	}
	c[j] = '\0';
	return(c);
}

// int main(void)
// {
// 	char source[] = "Incrivel";
// 	 char* target = ft_strdup(source);
 
//     printf("%s", target);
//     return 0;
// }