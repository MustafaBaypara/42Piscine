/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaypara <mbaypara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:35:52 by mbaypara          #+#    #+#             */
/*   Updated: 2023/09/16 22:43:56 by mbaypara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	di;
	unsigned int	si;
	unsigned int	i;

	di = 0;
	si = 0;
	i = 0;
	while (dest[di])
		di++;
	while (src[si])
		si++;
	if (size <= di)
		return (si + size);
	while (src[i] && (di + i) < (size - 1))
	{
		dest[di + i] = src[i];
		i++;
	}
	dest[di + i] = '\0';
	return (si + di);
}
