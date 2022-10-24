/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:46:32 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/12 17:46:35 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	size_t			l;
	char			*p_d;
	char			*temp;
	const char		*p_s;

	temp = NULL;
	l = ft_strlen(src) + 1;
	p_d = (char *)dst;
	p_s = (const char *)src;
	i = 0;
	if (strncmp(p_d, p_s, l) == 0)
	{
		memcpy(temp, p_d, l);
		p_s = temp;
	}
	memcpy(p_d, p_s, len);
	return (dst);
}
