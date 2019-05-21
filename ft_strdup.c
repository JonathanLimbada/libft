/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:19:28 by event             #+#    #+#             */
/*   Updated: 2019/05/21 14:39:12 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	int i;
	char *prt;

	i = 0;
	while (s1[i])
		i++;
	prt = (char *)malloc(i * sizeof(char));
	i = 0;
	while (s1[i])
	{
		prt[i] = s1[i];
		i++;
	}
	prt[i] = 0;
	return (prt);
}
