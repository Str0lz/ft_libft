/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:33:59 by rballage          #+#    #+#             */
/*   Updated: 2020/01/07 18:22:16 by rballage         ###   ########.fr       */
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
		str[size--] = '\0';
	return (str);
}

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
		if (*(src + i) != '\0')
			*(dest + i) = *(src + i);
		else
			while (i < n)
				*(dest + i++) = '\0';
	return (dest);
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
	char	*end;
	size_t i;

	i = 0;
	end = (char*)s1;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (ft_strhas(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_strnew(0));
	i = ft_strlen(s1)-1;
	end += ft_strlen(s1) - 1;
	while (ft_strhas(set, *end) == 1)
	{
		i--;
		end--;
	}
	return (ft_strncpy(ft_strnew(i), &(*s1), i));
}

int		main(void)
{
		printf("%s\n", ft_strtrim("65454  45454 2 1---2", " 42-1"));

	return (0);
}
