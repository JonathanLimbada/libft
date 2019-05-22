/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:23:50 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/22 15:41:44 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	int	i;

	while (n  > sizeof(src[i]))
	{
		dst[i] = src[i];
		n = n - sizeof(src[i]);
		i++;
	}
	return (dst);
}
