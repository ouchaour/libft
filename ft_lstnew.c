/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:53:51 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/22 13:48:21 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p -> content = content;
	p -> next = NULL;
	return (p);
}
/*
int main()
{
	t_list *kl;
	int *j ;
	int a = 5;
	j = &a;
	kl = ft_lstnew(j);
	printf("%d ->",*((int *)kl->content));
}*/
