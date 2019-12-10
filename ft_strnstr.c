/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 10:34:36 by rballage          #+#    #+#             */
/*   Updated: 2018/11/19 15:02:55 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	y;
	int		ct;

	i = len + 1;
	ct = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[0] != '\0' && i-- > 0)
	{
		y = i;
		while (str[ct] == to_find[ct] && y-- > 0)
		{
			ct++;
			if (to_find[ct] == '\0')
				return ((char *)str);
		}
		ct = 0;
		str++;
	}
	return (0);
}
