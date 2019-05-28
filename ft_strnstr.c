/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:56:57 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/28 16:48:16 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	j;
	
	j = 0;
	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (needle[j] == *haystack)
		{
			while (needle[j])
			{	
				if (*(haystack + j) != needle[j])
					break;
				else
					j++;
				if (j == ft_strlen((char *)needle))
					return((char *)haystack);
				len--;
			}
			j = 0;
		}
		len--;
		haystack++;
	}
	return (NULL);
}
