/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:51:04 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/20 22:02:20 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s1;
	const char	*s2;

	s1 = dst;
	s2 = src;
	if (dst == src)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	if (s1 > s2)
	{
		s1 += len - 1;
		s2 += len - 1;
		while (len--)
			*s1-- = *s2--;
		return (dst);
	}
	else
	{
		while (len--)
			*s1++ = *s2++;
		return (dst);
	}
	return (0);
}
