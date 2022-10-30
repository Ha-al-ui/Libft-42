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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
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