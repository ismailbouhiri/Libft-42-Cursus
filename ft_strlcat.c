/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 12:48:03 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/21 17:24:39 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	p;
	size_t	lenofdst;
	size_t	lenofsrc;
	size_t	b;

	b = 0;
	lenofdst = ft_strlen(dst);
	lenofsrc = ft_strlen(src);
	if (size <= lenofdst)
		return (lenofsrc + size);
	p = size - lenofdst - 1;
	while (p-- && src[b])
		dst[lenofdst++] = src[b++];
	dst[lenofdst] = '\0';
	return (lenofsrc + (lenofdst - b));
}
