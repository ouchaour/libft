/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:23:58 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/06 10:16:12 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int b)
{
	if ((ft_isalpha(b) == 1) || (ft_isdigit(b) == 1))
		return (1);
	else
		return (0);
}