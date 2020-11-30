/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:22:50 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/20 15:12:34 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_check(int n)
{
	int				i;
	unsigned int	res;

	i = 1;
	res = n;
	if (n < 0)
	{
		i++;
		res *= -1;
	}
	while (res > 9)
	{
		res = res / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int				i;
	unsigned char	*str;
	unsigned int	res;

	res = n;
	i = ft_check(n);
	str = (unsigned char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		res *= -1;
	}
	str[i] = '\0';
	while (--i && res >= 10)
	{
		str[i] = (res % 10) + 48;
		res = res / 10;
	}
	if (res < 10)
		str[i] = res % 10 + 48;
	return ((char*)str);
}
