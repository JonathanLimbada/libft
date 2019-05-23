/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:56:57 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/22 14:13:09 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	j;

	j = 0;
	if (needle == '\0')
		return (NULL);
	while ((*haystack != '\0') && (0 < len))
	{
		if (needle[j] == *haystack)
		{
			while (needle[j])
			{
				if (*(haystack + j) != needle[j])
					break;
				else
					j++;
				return((char *)haystack);
			}
			j = 0;
		}
		haystack++;
		len--;
	}
	return (NULL);
}
