/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaypara <mbaypara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:15:18 by mbaypara          #+#    #+#             */
/*   Updated: 2023/09/06 17:46:36 by mbaypara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	ft_swap(&x, &y);
	printf("x = %d \n", x);
	printf("y = %d \n", y);
	return (0);
}*/