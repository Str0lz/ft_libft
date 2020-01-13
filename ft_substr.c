/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:34:13 by rballage          #+#    #+#             */
/*   Updated: 2020/01/13 13:01:27 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	*ft_strncpy(char *dest, const char *src, size_t n)
// {
// 	size_t	i;
//
// 	i = -1;
// 	while (++i < n)
// 		if (*(src + i) != '\0')
// 			*(dest + i) = *(src + i);
// 		else
// 			while (i < n)
// 				*(dest + i++) = '\0';
// 	return (dest);
// }
//
// static char	*ft_strnew(size_t size)
// {
// 	char	*str;
//
// 	str = NULL;
// 	if (!(str = (char *)malloc((sizeof(char) * size) + 1)))
// 		return (NULL);
// 	while (size)
// 		str[size--] = '\0';
// 	return (str);
// }

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
