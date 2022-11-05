/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:51:43 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/29 12:52:12 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_trlen(int i)
{ 
  int len = 0;
    if( i == 0)
  {
    len++;
  }
  if(i < 0)
  {
    i *= -1;
    len++;
  }
  while(i > 0)
  {
    i /= 10;
    len++;
  }
return(len); 
}
char *ft_itoa(int n)
{
  int index = ft_trlen(n);
  char *p = malloc(sizeof(char) * ft_trlen(n) + 1);
  
  if (n == 0)
{
  p[0] = '0';
}
  if(n < 0)
  {
    p[0] = '-';
    n *= - 1;
  }
  p[index--] = '\0';
  while(n > 0)
  {
    p[index] = (n % 10) + 48;
    n = n / 10;
    index--;
  }
return p;    
}