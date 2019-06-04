/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:01:06 by event             #+#    #+#             */
/*   Updated: 2019/06/04 09:34:20 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char a1;
	unsigned char a2;

	a1 = *s1;
	a2 = *s2;
	if (n == 0)
		return (0);
	while (a1 == a2 && n)
	{
		a1 = *s1++;
		a2 = *s2++;
		if (a1 == '\0')
			return (a1 - a2);
		n--;
	}
	return (a1 - a2);
}
