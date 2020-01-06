/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:32:04 by rballage          #+#    #+#             */
/*   Updated: 2020/01/06 16:48:48 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ADD STRCAT ET STRCPY EN STATIC PLIZ THX

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	size_t tot;

	str = NULL;
	i = -1;
	tot = 0;
	if (!s1 || !s2)
		return (NULL);
	tot = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = ft_strnew(tot + 1)))
		return (NULL);
	while (*s1)
		*str++ = *s1;

	return (ft_strcat(ft_strcpy(str, s1), s2));
}
