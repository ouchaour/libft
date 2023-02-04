/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:30:22 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/18 02:34:22 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (s1[n])
		n++;
	p = (char *)malloc(sizeof(char) * (n + 1));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
