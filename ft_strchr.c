/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 10:33:46 by rballage          #+#    #+#             */
/*   Updated: 2018/11/18 10:33:46 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s)
		while (*s)
		{
			if (*s == (char)c)
				return ((char*)s);
			s++;
		}
	if (*s == '\0' && c == '\0')
		return ((char*)s);
	return (NULL);
}
