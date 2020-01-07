/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:29:11 by rballage          #+#    #+#             */
/*   Updated: 2020/01/07 14:02:28 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *list, t_list *(*f)(t_list *elem))
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *tmplist;
	t_list *ptr;
	t_list *new;

	if (lst && f)
	{
		new = f(lst);
		ptr = new;
		while (lst->next)
		{
			lst = lst->next;
			tmplist = f(lst);
			ptr->next = tmplist;
			ptr = ptr->next;
		}
		return (new);
	}
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (lst && f)
	{
		if (!(new = ft_lstnew(f(lst->content))))
			return (NULL);
		lst = lst->next;
		while (lst != NULL)
		{
			if (!(tmp = ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			ft_lstadd_back(&new, tmp);
			lst = lst->next;
		}
		return (new);
	}
	return (NULL);
}
