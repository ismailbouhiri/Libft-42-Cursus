/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:33:29 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/22 17:22:56 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len;

	len = ft_strlen(src);
	if (++len < size)
		ft_memcpy(dst, src, len);
	else if (size)
	{
		ft_memcpy(dst, src, --size);
		dst[size] = '\0';
	}
	return (--len);
}
