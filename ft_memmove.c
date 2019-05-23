/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:03:35 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/23 11:57:06 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const char *src, size_t len)
{
		int	i;
	unsigned char *pdst;
	unsigned char *psrc;

	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (len  > sizeof(src[i]))
	{
		if (psrc > pdst)
		{
			psrc[i] = pdst[i];
			len = len - sizeof(src[i]);
			i++;
		}
		else
		{
			pdst[i] = psrc[i];
			len = len - sizeof(psrc[i]);
			i++;
		}
	}
	return (dst);
}
