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

int ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	rst;

	i = 0;
	s = 1;
	rst = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s*= -1;
		if (str[i] < '0' && str[i] > '9')
		    return (0);
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		rst = rst * 10 + (str[i] - 48);
		i++;
	}
	return (rst * s);
}
// int main()
// {
//     const char s[] = "    -51b255";
//     printf("%d\n", ft_atoi(s));
//     printf("%d", atoi(s));
// }

