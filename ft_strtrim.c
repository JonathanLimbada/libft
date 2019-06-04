/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:48:25 by jlimbada          #+#    #+#             */
/*   Updated: 2019/06/04 13:21:28 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_white_space(char const *s)
{
	int		j;

	j = 0;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j++;
	return (j);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		n;
	int		slen;

	if (s == NULL)
		return (NULL);
	if (ft_strlen((char *)s) == 0)
		return ((char*)s);
	i = is_white_space(s);
	n = 0;
	slen = ft_strlen((char *)s) - 1;
	if (s[i] == '\0')
		return (ft_strdup(""));
	while (s[slen] == '\t' || s[slen] == '\n' || s[slen] == ' ')
		slen--;
	if (slen < 0)
		slen = 0;
	if (!(str = (char *)malloc(sizeof(char) * (slen - i) + 2)))
		return (NULL);
	while (i <= slen)
		str[n++] = s[i++];
	str[n] = '\0';
	return (str);
}
