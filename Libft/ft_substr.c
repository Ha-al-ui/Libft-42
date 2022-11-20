/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:59 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/17 22:35:56 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if ((ft_strlen(s + start)) < len)
		len = ft_strlen(s + start);
	ns = (char *)malloc(sizeof (char) * (len + 1));
	if (!ns)
		return (0);
	ft_strlcpy(ns, s + start, len + 1);
	return (ns);
}
