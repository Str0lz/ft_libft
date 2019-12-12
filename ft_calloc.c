/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:46:31 by rballage          #+#    #+#             */
/*   Updated: 2019/12/12 18:38:21 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (!(ptr = (void*)malloc(sizeof(size_t) * (count * size))))
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
