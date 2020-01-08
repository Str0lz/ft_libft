/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:33:29 by rballage          #+#    #+#             */
/*   Updated: 2020/01/08 13:03:45 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = NULL;
	if (!(str = (char *)malloc((sizeof(char) * size) + 1)))
		return (NULL);
	while (size)
		str[size--] = '\0';
	return (str);
}
