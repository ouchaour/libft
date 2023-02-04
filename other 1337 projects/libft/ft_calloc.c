/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:31:01 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/06 11:31:15 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		n;
	char	*p;

	p = (char *)malloc(size * count);
	n = count * size;
	if (!p)
		return (NULL);
	ft_bzero(p, n);
	return (p);
}
