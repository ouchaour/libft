/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:25:53 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/27 02:11:28 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			if ((s[i - 1] == c || i == 0))
				count++;
			i++;
		}
	}
	return (count);
}

static char	**frini(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (str);
}

static char	**allo(char const *s, char c)
{
	char	**ptr;

	if (s == NULL)
		return (NULL);
	ptr = ft_calloc((wcount(s, c) + 1), sizeof(char *));
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		j;
	int		i;

	ptr = allo(s, c);
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		j = 0;
		while (s[j] != '\0' && s[j] != c)
			j++;
		if (j != 0)
		{
			ptr[i] = ft_substr(s, 0, j);
			if (ptr[i] == NULL)
				return (frini(ptr, i));
			i++;
		}
		s = s + j;
	}
	return (ptr);
}
