/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:29:11 by rballage          #+#    #+#             */
/*   Updated: 2020/01/06 16:28:04 by rballage         ###   ########.fr       */
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
