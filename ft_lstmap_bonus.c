/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:29:11 by rballage          #+#    #+#             */
/*   Updated: 2019/12/12 19:29:18 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, t_list *(*f)(t_list *elem))
{
	t_list *tmplist;
	t_list *ptr;
	t_list *new;

	if (list && f)
	{
		new = f(list);
		ptr = new;
		while (list->next)
		{
			list = list->next;
			tmplist = f(list);
			ptr->next = tmplist;
			ptr = ptr->next;
		}
		return (new);
	}
	return (NULL);
}
