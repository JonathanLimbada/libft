/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:27:35 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/29 10:14:55 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((dst[i] != '\0') && i < dstsize)
		i++;
	while ((src[j] != '\0') && (i + 1 < dstsize))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i - j < dstsize)
		dst[i] = '\0';
	return (i - j + (int)ft_strlen((char *)src));
}
