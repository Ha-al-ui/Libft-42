/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:12:09 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/11 22:24:19 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	white_spaces(const char *s, size_t i)
{
	return (s[i] != '\0' && (s[i] == 32 || s[i] == '\t' || s[i] == '\n'
			|| s[i] == '\r' || s[i] == '\v' || s[i] == '\f'));
}

int	ft_atoi(const char *str)
{
	int				c;
	int				s;
	unsigned long	res;

	c = 0;
	s = 1;
	res = 0;
	while (white_spaces(str, c))
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + (str[c] - '0');
		c++;
		if (res > 9223372036854775807ull && s == 1)
			return (-1);
		if (res > 9223372036854775807ull)
			return (0);
	}
	return (res * s);
}
