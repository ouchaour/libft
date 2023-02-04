/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:14:46 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/22 22:52:09 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned int	i;

	s2 = (unsigned char *)s;
	i = 0;
	while (i < n && s2[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)s2 + i);
}
