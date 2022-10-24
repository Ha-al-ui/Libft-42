/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:14:27 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/12 20:15:08 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	d_l;
	size_t	s_l;
	size_t	i;

	i = 0;
	d_l = ft_strlen(dst);
	s_l = ft_strlen(src);
	if (dstsize <= s_l)
		return (dstsize + s_l);
	while (src[i] != '\0' && i + d_l < dstsize - 1)
	{
		dst[d_l + i] = src[i];
		i++;
		if (i + d_l == dstsize - 1)
			break ;
	}
	dst[d_l + i] = '\0';
	return (d_l + s_l);
}
