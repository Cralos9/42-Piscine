/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:57:10 by cacarval          #+#    #+#             */
/*   Updated: 2023/02/05 13:08:31 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main ()
// {
// 	int  a;
// 	int b;
// 	int div;
// 	int mod;
// 	a=25;
// 	b=10;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d\n%d\n",div, mod);
// 	return(0);
// }