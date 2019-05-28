/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:19:28 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/28 09:33:11 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int i;
	char *prt;

	i = 0;
	while (s1[i])
		i++;
	prt = (char *)malloc(i + 1 * sizeof(char));
	if (prt == '\0')
		return (NULL);
	i = 0;
	while (s1[i])
	{
		prt[i] = s1[i];
		i++;
	}
	prt[i] = 0;
	return (prt);
}
