/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:46:31 by rballage          #+#    #+#             */
/*   Updated: 2019/12/10 17:58:52 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*ptr

	if (!(ptr = (void*)malloc(count * size)))
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
