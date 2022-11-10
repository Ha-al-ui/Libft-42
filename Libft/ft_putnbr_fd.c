/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:58:59 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/08 22:59:14 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	d;
	int	m;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= (-1);
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 10)
	{
		m = n % 10;
		d = n / 10;
		n = d;
		ft_putnbr_fd(n, fd);
		ft_putchar_fd(m + '0', fd);
	}
	else if (n >= 0 && n < 10)
		ft_putchar_fd(n + '0', fd);
}
