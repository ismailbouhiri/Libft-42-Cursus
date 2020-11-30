/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:35:13 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/15 19:55:03 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	i = 0;
	dst = (unsigned char*)s1;
	src = (unsigned char*)s2;
	while (i < n)
	{
		if (dst[i] != src[i])
		{
			return (dst[i] - src[i]);
		}
		i++;
	}
	return (0);
}
