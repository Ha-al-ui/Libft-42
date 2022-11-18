/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:19:36 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/06 15:00:42 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char )c;
		i++;
	}
	return ((unsigned char *)b);
}
// int main()
// {
// 	int i = 0;
// 	ft_memset(&i,136, 1);
// 	ft_memset((char *)&i+1,19, 1);
// 	printf("%d",(char *)i);
// int main()
// {
// 	char str [] = "dsksfjh";
// 	int c = 'k';
// 	ft_memset(str, c, 5);
// 	printf("%s", str);
// }