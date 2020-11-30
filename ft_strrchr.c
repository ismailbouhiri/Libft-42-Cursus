/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:12:48 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/18 10:41:02 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char*)s;
	while (ptr[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i--;
	}
	return (NULL);
}
