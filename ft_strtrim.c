/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 10:34:51 by rballage          #+#    #+#             */
/*   Updated: 2018/11/18 10:34:52 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *src)
{
	char const *end;

	end = NULL;
	if (src == NULL)
		return (NULL);
	while (*src == ' ' || *src == '\t' || *src == '\n')
		src++;
	if (*src == '\0')
		return (ft_strnew(0));
	end = src + (ft_strlen(src) - 1);
	while (*end == ' ' || *end == '\t' || *end == '\n')
		end--;
	return (ft_strsub(src, 0, end - src + 1));
}
