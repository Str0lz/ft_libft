/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 15:55:31 by rballage          #+#    #+#             */
/*   Updated: 2020/01/06 13:26:58 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	char			*s2;
	int				i;
	unsigned int	u;

	i = -1;
	u = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!(s2 = (char*)malloc(sizeof(*s2) * len + 1)))
		return (NULL);
	while (s[++i] && u != len)
		s2[i] = (*f)(u++, s[i]);
	s2[i] = '\0';
	return (s2);
}
