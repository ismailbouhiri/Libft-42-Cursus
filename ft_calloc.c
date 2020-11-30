/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 10:08:11 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/22 17:30:42 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;
	size_t	i;

	i = count * size;
	s = (char *)malloc(i);
	if (!s)
		return (NULL);
	while (i--)
		s[i] = 0;
	return (s);
}
