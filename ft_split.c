/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:42:40 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/22 17:48:20 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_char(char *chars, char c)
{
	int i;

	i = 0;
	while (*chars == c)
		chars++;
	while (chars[i])
	{
		if (chars[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static	int		count_word(char const *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 1;
	if (s[i] == '\0')
		return (0);
	while (s[i] == c)
	{
		if (s[i + 1] == '\0')
			return (0);
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	return (word);
}

static	char	**ft_free(char *str, int i, char **ptr)
{
	while (i >= 0)
	{
		free(str);
		i--;
	}
	free(ptr);
	return (0);
}

char			**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	**string;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	len = 0;
	ptr = (char*)s;
	if (!(string = (char **)malloc((count_word(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (count_word(s, c) > len)
	{
		i = 0;
		if (!(string[len] = (char *)malloc((count_char(ptr, c) + 1) *
			sizeof(char))))
			return (ft_free(string[len], len, string));
		while (*ptr == c)
			ptr++;
		while (*ptr != c && *ptr)
			string[len][i++] = *ptr++;
		string[len++][i] = '\0';
	}
	string[len] = 0;
	return (string);
}
