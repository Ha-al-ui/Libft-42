/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:19:36 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/10 23:19:45 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t    i;
    
    i = 0;
    while(i < len)
    {
        ((unsigned char *)b)[i] = c;
        i++;
    }
    return (b);
}
// int main()
// {
//     int s[] ={1, 1, 1, 1};
//     int s1 = {2};
//     ft_memset(&s[3], s1, 3);
//     printf("%s", s);
// }
