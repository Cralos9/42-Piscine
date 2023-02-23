/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:52:56 by cacarval          #+#    #+#             */
/*   Updated: 2023/02/14 10:21:56 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// int main(void)
// {
// 	char a[] = "AHHH";
// 	char b[] = "BBBBBB";

// 	printf("%s\n", a);
// 	ft_strcpy(a, b);
// 	printf("%s\n", b);
// 	return(0);

// }
