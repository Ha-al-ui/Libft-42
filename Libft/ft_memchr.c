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

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const char	*ps;

	i = 0;
	ps = s;
	while(ps[i] != '\0' && i < n)
	{
		if(ps[i] == (char)c)
			return((void *)s + i);
		i++;
	}
	return (0);
}