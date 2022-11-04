/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:59 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/18 11:09:45 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ns;

	if (!s)
		return (NULL);
	i = 0;
	ns = (char *)malloc(sizeof (char) * (len + 1));
	if (ns != 0)
	{
		while (s[start + i] && len)
		{
			ns[i] = s[start + i];
			len--;
			i++;
		}
		ns[i] = '\0';
		return (ns);
	}
	return (0);
}