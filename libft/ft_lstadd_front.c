/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:01:32 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/11/22 14:46:10 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
		new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list *p;
	t_list *p1;
	t_list *p2;
	t_list *N;

	N = ft_lstnew("hada ");
	p = ft_lstnew("you");
	p1 = ft_lstnew("ss");
	p2 = ft_lstnew("ef");
	p->next = p1;
	p1->next = p2;
	p2->next = NULL;

	//ft_lstadd_front(&p, N);
	while(p)
	{
		printf("%s", p->content);
		p = p->next;
	}
}*/
