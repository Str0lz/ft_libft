/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 10:32:08 by rballage          #+#    #+#             */
/*   Updated: 2018/11/19 12:02:02 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1b;
	unsigned char	*s2b;

	if (n == 0)
		return (0);
	s1b = (unsigned char*)s1;
	s2b = (unsigned char*)s2;
	i = 0;
	while (*s1b == *s2b && ++i < n)
	{
		s1b++;
		s2b++;
	}
	return (*s1b - *s2b);
}
