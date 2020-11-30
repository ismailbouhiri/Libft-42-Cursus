/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:12:48 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/23 10:30:06 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	m;
	size_t	i;
	char	*ptr;

	m = 0;
	ptr = (char*)haystack;
	if (haystack == NULL && len == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (ptr[m] && m < len)
	{
		i = 0;
		while (ptr[m + i] == needle[i] && m + i < len)
		{
			i++;
			if (needle[i] == '\0')
				return (&ptr[m]);
		}
		m++;
	}
	return (0);
}
