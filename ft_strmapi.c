/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 15:55:31 by rballage          #+#    #+#             */
/*   Updated: 2020/01/06 10:26:13 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	char			*tab;
	int				i;
	unsigned int	u;

	i = 0;
	u = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!(tab = (char*)malloc(sizeof(*tab) * len + 1)))
		return (NULL);
	while (s[i])
	{
		tab[i] = (*f)(u++, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
