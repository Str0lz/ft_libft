/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:27:22 by rballage          #+#    #+#             */
/*   Updated: 2020/01/08 16:20:49 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int sign;
	long long n;

	sign = 1;
	n = 0;
	while ((*str + 0 <= 13 && *str + 0 >= 9) || *str + 0 == 32)
		str++;
	while ((ft_isdigit(*str) || *str == '+' || *str == '-') && *str != '\0')
	{
		if ((*str == '-' || *str == '+') && !(ft_isdigit(str[1])))
			return (0);
		if ((*str == '-' || *str == '+') && (n > 0))
			return (n * sign);
		if (*str == '-' && ft_isdigit(str[1]))
			sign = -1;
		else if (ft_isdigit(*str))
			n = n * 10 + (*str - 48);
		str++;
	}
	if ((n * sign >= 2147483648) || (n * sign <= -2147483649))
		return (-1);
	return ((int)(n * sign));
}
