/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 10:34:11 by rballage          #+#    #+#             */
/*   Updated: 2018/11/20 09:02:03 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
