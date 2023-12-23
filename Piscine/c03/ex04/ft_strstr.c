/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaypara <mbaypara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:02:59 by mbaypara          #+#    #+#             */
/*   Updated: 2023/09/16 22:43:09 by mbaypara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	fi;

	i = 0;
	fi = 0;
	while (str[i])
	{
		while (str[i + fi] == to_find[fi] && str[i + fi] != '\0')
			fi++;
		if (to_find[fi] == '\0')
			return (str + i);
		i++;
		fi = 0;
	}
	return (0);
}
