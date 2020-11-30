/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:52:00 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/23 11:10:16 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char*)s;
	while (*ptr != '\0')
	{
		if (*ptr == (unsigned char)c)
			return (&*ptr);
		ptr++;
	}
	if (*ptr == (unsigned char)c)
		return (&*ptr);
	return (0);
}
