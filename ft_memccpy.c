/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 10:51:39 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/18 10:38:30 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	*s1;

	s2 = (unsigned char*)src;
	s1 = (unsigned char*)dst;
	while (n > 0)
	{
		*s1 = *s2;
		if (*s2 == (unsigned char)c)
		{
			return (s1 + 1);
		}
		s1++;
		s2++;
		n--;
	}
	return (NULL);
}
