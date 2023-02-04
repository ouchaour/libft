/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:29:46 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/27 02:10:45 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;
	unsigned int	n;

	i = 0;
	if (s && f)
	{
		n = ft_strlen(s);
		p = (char *)malloc(sizeof(char) * (n + 1));
		if (!p)
			return (NULL);
		while (n--)
		{
			p[i] = (*f)(i, s[i]);
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
