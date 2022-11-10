/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:29:04 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/12 01:33:15 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ps;
	unsigned char		pc;

	i = 0;
	ps = s;
	pc = c;
	while (i < n)
	{
		if (ps[i] == pc)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
int main()
{
	int i[] = {1,3,6};
	int c = 3;
	printf("%p\n",ft_memchr((char*)i + 4 ,c,2));
	// printf("%ld",0x7ffee7e3e7f0);
}
