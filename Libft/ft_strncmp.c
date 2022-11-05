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
	size_t    i;
    i = 0;
	if(!s1)
		return((unsigned char)s1[i] - (unsigned char)s2[i]);
    while ((s1[i] || s2[i]) && i < n)
    {
    if ((unsigned char)s1[i] > (unsigned char)s2[i])
      return (1);
    if((unsigned char)s1[i] < (unsigned char)s2[i])
      return (-1);
	  i++;
	}
	return(0);
}
// int main()
// {
//     char h[] ="hay";
//     char hh[] ="jam";
//     printf("%d\n",ft_strncmp(h,hh,0));
//     printf("%d",strncmp(h, hh, 0));
// }