/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:03:35 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/28 13:27:37 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const char *src, size_t len)
{
   size_t    i;
   char *pdst;
   char *psrc;

   i = 0;
   pdst = (char *)dst;
   psrc = (char *)src;
   if (dst == src && len > 0)
       return (NULL);
   if (psrc < pdst)
       while ((int)(--len) >= 0)
       {
           pdst[len] = psrc[len];
	   }
   else
       while (len > i)
       {
           pdst[i] = psrc[i];
           i++;
       }
   return (dst);
}
