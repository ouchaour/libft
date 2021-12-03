/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:53:38 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/23 20:04:39 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	n;
	char	*p;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		n = ft_strlen(s1) + ft_strlen(s2);
		p = (char *)malloc(sizeof(char) * (n + 1));
		if (p)
		{
			while (s1[i])
			{
				p[i] = s1[i];
				i++;
			}
			while (s2[j])
				p[i++] = s2[j++];
			p[i] = '\0';
		}
		return (p);
	}
	return (NULL);
}
