/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:51:05 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/12 11:07:06 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int len;
	
	len = ft_strlen(s);
	while(len >= 0)
	{
		if (s[len] == c)
			return((char *)s + len);
		len--;
	}
	if (s[len] == c)
		return ((char *)s + len);
	else
		return (0);
}
// int main () {
// 	const char str[] = "http://www.tutorialspoint.com";
// 	int n = '\0';

//    printf("String after |%c| is - |%s|\n", n, ft_strrchr(str, n));
//    printf("String after |%c| is - |%s|\n", n, strrchr(str, n));
// }
