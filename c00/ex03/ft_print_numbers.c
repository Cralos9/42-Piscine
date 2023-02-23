/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:03:18 by cacarval          #+#    #+#             */
/*   Updated: 2023/02/04 16:44:48 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
n = n + 1;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
