/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:23:50 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/23 08:52:15 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	int	i;
	unsigned char *pdst;
	unsigned char *psrc;

	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;

	while (n  > sizeof(src[i]))
	{
		pdst[i] = psrc[i];
		n = n - sizeof(psrc[i]);
		i++;
	}
	return (dst);
}

