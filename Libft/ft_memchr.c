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
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n)
	{
		if (*a == (unsigned char)c)
			return (a);
		a++;
		n--;
	}
	return (NULL);
}
// int main()
// {
// 	char i[] = {1,3,6,67,9,90,88};
// 	int c = 9;
// 	void *p = ft_memchr(i,c,5);
// 	printf("%d",*(char *)p);
// }
// int main()
// {
// 	char s [] = "asljha";
// 	printf("%s", ft_memchr(s, 'l', ));
// }
