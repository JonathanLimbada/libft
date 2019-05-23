/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:23:25 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/22 10:57:53 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	j;
	
	j = 0;
	if (needle == '\0')
		return (NULL);
	while (*haystack)
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
	}
	return (NULL);
}