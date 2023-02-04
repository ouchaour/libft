/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:43:04 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/23 20:56:58 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	int				i;
	unsigned int	n;

	i = 0;
	if (s)
	{
		n = ft_strlen(s);
		p = (char *)malloc(sizeof(char) * len + 1);
		if (!p)
			return (NULL);
		while (i < (int)len && s[start] && start < n)
		{
			p[i] = s[start];
			start++;
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
