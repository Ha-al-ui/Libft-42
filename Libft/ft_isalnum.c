/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:18:02 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/07 23:34:09 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	if((c >= 48 && c <= 57) || (c >= 65 && c<= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}