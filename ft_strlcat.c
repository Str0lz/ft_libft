/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:32:12 by rballage          #+#    #+#             */
/*   Updated: 2020/01/07 15:21:52 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	i = -1;
	j = (int)ft_strlen(dest);
	while (*(src + ++i) && i < (int)n)
		*(dest + j++) = *(src + i);
	*(dest + j) = '\0';
	return (dest);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t len_src;
	size_t len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	ft_strncat(dest, src, size - len_dest - 1);
	if (size < len_dest)
		return (size + len_src);
	else
		return (len_dest + len_src);
}
