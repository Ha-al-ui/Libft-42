/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:51:05 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/17 22:34:25 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	p;

	p = c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == p)
			return ((char *)s + len);
		len--;
	}
	if (p == '\0')
		return ((char *)s);
	return (0);
}
// int main()
// {
// 	char s[]= "maxpaytnflkrc";
// 	printf("%s", ft_strrchr(s, 't'));
// }
