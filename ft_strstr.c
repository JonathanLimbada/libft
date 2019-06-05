/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:23:25 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/29 10:20:13 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	j;

	j = 0;
	if ((int)ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		if (needle[j] == *haystack)
		{
			while (needle[j])
			{
				if (*(haystack + j) != needle[j])
					break ;
				else
					j++;
				if (j == (int)ft_strlen((char *)needle))
					return ((char *)haystack);
			}
			j = 0;
		}
		haystack++;
	}
	return (NULL);
}
