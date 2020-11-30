/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:00:42 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/23 11:11:21 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		t;
	int		lenofs1;
	int		lenofs2;
	char	*pointeur;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	t = 0;
	lenofs1 = ft_strlen(s1);
	lenofs2 = ft_strlen(s2);
	pointeur = (char*)malloc((lenofs1 + lenofs2) * sizeof(char) + 1);
	if (!pointeur)
		return (0);
	while (lenofs1--)
	{
		pointeur[t] = s1[t];
		t++;
	}
	lenofs1 = 0;
	while (lenofs2--)
		pointeur[t++] = s2[lenofs1++];
	pointeur[t] = '\0';
	return (pointeur);
}
