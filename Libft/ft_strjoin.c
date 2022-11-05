/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:45:43 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/18 18:50:58 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s0;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s0 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (s0 == 0)
		return (0);
	else
	{
		ft_memcpy (s0, s1, len);
		ft_strlcat (s0, s2, len);
	}
	return ((char *)s0);
}
// int main()
// {
// 	char s [] = "vlsdkjl";
// 	char s1 = NULL;
// 	printf("%s", ft_strjoin(s, s1));
// }