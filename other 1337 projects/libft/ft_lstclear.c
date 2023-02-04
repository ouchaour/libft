/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:31:01 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/27 02:50:40 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		p = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(p, del);
	}
}
/*
int main()
{
	t_list *l;
	t_list *l1;
	t_list *l2;

	l = ft_lstnew(ft_strdup("kko "));
	l1 = ft_lstnew(ft_strdup("zaplo "));
	l2 = ft_lstnew(ft_strdup("batbat "));
	l->next = l1;
	l1->next = l2;
	l2->next= NULL;
	ft_lstclear(&l, del);
	while(l)
	{
		printf("%s", l->content);
		l = l->next;
	}
}*/
