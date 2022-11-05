/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:01:28 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/11 18:05:30 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	const char	*s;

	if(len == 0)
      return (dst);
	if (!dst && !src)
        return (0);
	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	while(len)
	{
		d[i] = s[i];
		i++;
		len--;
	}
	return (dst);
}
// int main()
// {
//   char s1[] = "0";
//   char s2[] = "0";
//   ft_memcpy(s1, s2, 2);
//   printf("%s", s1);
// }