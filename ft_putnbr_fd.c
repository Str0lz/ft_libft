/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:31:19 by rballage          #+#    #+#             */
/*   Updated: 2019/12/12 19:31:20 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int filde)
{
	if (n < 0)
	{
		n = n * -1;
		ft_putchar_fd('-', filde);
	}
	if (n == -2147483648)
	{
		ft_putchar_fd('2', filde);
		n = 147483648;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, filde);
		ft_putnbr_fd(n % 10, filde);
	}
	else
		ft_putchar_fd('0' + n, filde);
}
