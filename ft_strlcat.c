/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:30:50 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/22 22:02:41 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ld;
	size_t	ls;
	size_t	j;

	ld = 0;
	ls = 0;
	i = 0;
	j = 0;
	while (src[ls] != '\0')
		ls++;
	while (dest[ld] != '\0')
		ld++;
	if (size <= ld)
		j = size + ls;
	else
		j = ld + ls;
	while ((ld + 1) < size && src[i] != '\0')
	{
		dest[ld] = src[i];
		ld++;
		i++;
	}
	dest[ld] = '\0';
	return (j);
}
