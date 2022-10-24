/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:29:40 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/11 21:33:29 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while(*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if(*s == c)
		return((char *)s);
	else
		return (0);


}
// int main () {
// 	const char str[] = "http://www.tutorialspoint.com";
// 	int n = '\0';

//    printf("String after |%c| is - |%s|\n", n, ft_strchr(str, n));
//    printf("String after |%c| is - |%s|\n", n, strchr(str, n));
// }
