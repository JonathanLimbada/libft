/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:23:13 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/23 13:43:06 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *ps;

	ps = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((int)ps[i] == (char)c)
			return ((void *)&ps[i]);
		i++;
	}
	return (NULL);
}

int main (void) 
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
