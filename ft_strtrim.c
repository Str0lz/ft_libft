/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:33:59 by rballage          #+#    #+#             */
/*   Updated: 2020/01/06 13:27:03 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnew(size_t size)
{
	char *str;

	str = NULL;
	if (!(str = (char *)malloc((sizeof(char) * size) + 1)))
		return (NULL);
	while (size)
		str[--size] = '\0';
	return (str);
}

static int	ft_strhas(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}
// set = null ? renvoyer s1 ou copy s1 ?
char		*ft_strtrim(char const *s1, char const *set)
{
	char	*end;

	end = NULL;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (s1);
	while (*s1 && ft_strhas(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_strnew(0));
	end = s1 + (ft_strlen(s1) - 1);
	while (ft_strhas(set, *end))
		end--;
	return (ft_substr(s1, 0, end - s1 + 1));
}
