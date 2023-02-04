/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:33:48 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/08 19:30:24 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to, size_t n)
{
	size_t	j;
	size_t	i;
	char	*str;
	char	*to_find;

	i = 0;
	str = (char *)s;
	to_find = (char *)to;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] != '\0' && str[i + j] == to_find[j] && i + j < n)
				j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*
 * int main()
{
   const char haystack[20] = "W3CSchooldfghjkl;kl";
   const char needle[10] = "l;";
   char *ret;

   ret = ft_strnstr(haystack, needle,17);

   printf("子字符串是： %s\n", ret);

   return(0);
}*/
