/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:32:04 by rballage          #+#    #+#             */
/*   Updated: 2020/01/08 13:26:21 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ADD STRCAT ET STRCPY EN STATIC PLIZ THX

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t tot;

	str = NULL;
	if (!s1 || !s2)
		return (NULL);
	tot = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = ft_strnew(tot)))
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	return (str - tot);
}
// 
// int		main(void)
// {
// 		printf("%s\n", ft_strjoin(" ", "444444447777665454  454754 2 1---2"));
//
// 	return (0);
// }
