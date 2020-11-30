/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:31:56 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/21 18:06:36 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	return (i);
}

static	int		ft_last(char const *s1, char const *set)
{
	int i;
	int len;

	len = ft_strlen(s1);
	i = 0;
	while (set[i] && len)
	{
		if (set[i] == s1[len])
		{
			i = 0;
			len--;
		}
		if (set[i] != s1[len])
			i++;
	}
	return (len);
}

static	int		ft_first(char const *s1, char const *set)
{
	int	i;
	int len;

	len = 0;
	i = 0;
	while (s1[len] && set[i])
	{
		if (set[i] == s1[len])
		{
			i = 0;
			len++;
		}
		if (set[i] != s1[len])
			i++;
	}
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		p;
	int		i;
	char	*pointeur;
	int		len;
	int		len1;

	if (s1 == NULL)
		return (0);
	i = 0;
	len = ft_first(s1, set);
	len1 = ft_last(s1, set);
	p = len1 - len + 1;
	if (p < 0)
		p = 0;
	if (!(pointeur = (char *)malloc(p * sizeof(char) + 1)))
		return (NULL);
	while (s1[len] && i < p)
	{
		pointeur[i] = s1[len];
		i++;
		len++;
	}
	pointeur[i] = '\0';
	return (pointeur);
}
