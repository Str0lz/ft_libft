/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:33:59 by rballage          #+#    #+#             */
/*   Updated: 2020/01/10 15:19:31 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnew(size_t size)
{
	char	*str;

	str = NULL;
	if (!(str = (char *)malloc((sizeof(char) * size) + 1)))
		return (NULL);
	while (size)
		str[size--] = '\0';
	return (str);
}

static int	ft_strhas(const char *set, char c)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = 0;
	res = NULL;
	if (!s1 && !set)
		return (NULL);
	else if (!set)
		return (ft_strdup(s1));
	else if (!s1)
		return (ft_strnew(0));
	while (ft_strhas(set, *(s1 + j)))
		j++;
	if (s1 + j == '\0')
		return (ft_strnew(0));
	i = ft_strlen(s1) - 1;
	while (ft_strhas(set, *(s1 + i)))
		i--;
	res = ft_substr(s1, j, i - j + 1);
	if (!res)
		return (ft_strnew(0));
	return (res);
}
