/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:16:18 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/22 18:05:16 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointeur;
	size_t	i;

	i = 0;
	if (!s || start > ft_strlen(s))
	{
		pointeur = (char *)malloc(sizeof(char));
		if (!pointeur)
			return (0);
		pointeur[0] = '\0';
		return (pointeur);
	}
	pointeur = (char*)malloc(len * sizeof(char) + 1);
	if (!pointeur)
		return (NULL);
	while (s[start] && i < len)
	{
		pointeur[i] = s[start];
		i++;
		start++;
	}
	pointeur[i] = '\0';
	return (pointeur);
}
