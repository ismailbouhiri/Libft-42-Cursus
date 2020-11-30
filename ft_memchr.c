/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:28:31 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/22 13:35:24 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *b;

	b = (unsigned char*)s;
	while (n--)
	{
		if (*b == (unsigned char)c)
			return (b);
		b++;
	}
	return (0);
}
