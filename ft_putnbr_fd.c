/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:27:57 by ibouhiri          #+#    #+#             */
/*   Updated: 2019/10/20 15:13:17 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	long res;

	res = n;
	if (n < 0)
	{
		res = -res;
		ft_putchar_fd('-', fd);
	}
	if (res > 9)
	{
		ft_putnbr_fd(res / 10, fd);
		ft_putchar_fd('0' + res % 10, fd);
	}
	else
		ft_putchar_fd(res + 48, fd);
}
