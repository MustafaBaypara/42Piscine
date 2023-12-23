/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaypara <mbaypara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:56:44 by mbaypara          #+#    #+#             */
/*   Updated: 2023/09/17 19:01:12 by mbaypara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base_put(int nbr, char *base, int size)
{
	char	a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	if (nbr >= size)
		ft_putnbr_base_put(nbr / size, base, size);
	a = base[nbr % size];
	write(1, &a, 1);
}

int	ft_can_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	if (ft_can_base(base) == 1)
	{
		while (base[size] != '\0')
			size++;
		ft_putnbr_base_put(nbr, base, size);
	}
}
