/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaypara <mbaypara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:05:37 by mbaypara          #+#    #+#             */
/*   Updated: 2023/09/08 10:34:06 by mbaypara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	array;

	index = 0;
	while (index < (size / 2))
	{
		array = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = array;
		index++;
	}
}
/*
int main(void)
{
	int tab[5] = {0, 1, 2, 3, 4};
	ft_rev_int_tab(tab, 5);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]); 
}*/