/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:38:26 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/23 20:57:20 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	amam(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!ft_strchr(set, s[i]))
			break ;
		i++;
	}
	return (i);
}

static int	loor(char const *s, char const *set)
{
	int	n;

	n = ft_strlen(s);
	while (n)
	{
		if (!ft_strchr(set, s[n - 1]))
			break ;
		n--;
	}
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lgd;
	size_t	lkh;
	char	*p;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	lgd = (size_t)amam(s1, set);
	lkh = (size_t)loor(s1, set);
	if (lgd > lkh)
		return (ft_strdup("\0"));
	p = (char *)malloc(sizeof(char) *(lkh - lgd + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1 + lgd, lkh - lgd + 1);
	return (p);
}
/*
int main()
{
	char dd[] = "hna ";
	printf("hadi lowla :    ");
	puts(dd);
	printf("\nwhadi tania :    %s \n",ft_strtrim(dd, ""));
	return (0);
}*/
