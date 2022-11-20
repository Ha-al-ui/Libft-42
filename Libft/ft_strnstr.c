/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:47:09 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/13 11:49:45 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*f_are_same(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (haystack[i] != '\0')
	{
		while (haystack[i + n] == needle[n] || needle[n] == '\0')
		{
			if (n + i > len)
				return (0);
			else if (needle[n] == '\0')
				return ((char *)haystack + i);
			n++;
		}
		n = 0;
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l_n;
	size_t	l_h;

	if (!haystack && len == 0)
		return (NULL);
	l_h = ft_strlen(haystack);
	l_n = ft_strlen(needle);
	if (l_n > len)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	return (f_are_same(haystack, needle, len));
}
