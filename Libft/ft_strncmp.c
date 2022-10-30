/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:13:40 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/13 09:16:11 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				cmp;

	i = 0;
	while (s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		i--;
	cmp = s1[i] - s2[i];
	return (cmp);
}