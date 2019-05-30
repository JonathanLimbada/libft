/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:48:25 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/30 16:20:11 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		end;
	char	*new;
	int		z;

	i = 0;
	if (s == NULL)
		return (NULL);
	end = ft_strlen((char *)s);
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		i++;
	if (s[i] == '\0')
		return ("");
	while (s[end - 1] == '\n' || s[end - 1] == '\t' || s[end - 1] == ' ')
		end--;
	z = end - i;
	if (!(new = (char *)malloc(z + 1 * sizeof(char))))
		return (NULL);
	z = 0;
	while (i < end)
	{
		new[z++] = s[i++];
	}
	new[z] = '\0';
	return (new);
}
