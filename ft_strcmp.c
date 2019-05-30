/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 15:50:54 by event             #+#    #+#             */
/*   Updated: 2019/05/29 16:58:52 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char a1;
	unsigned char a2;

	a1 = *s1;
	a2 = *s2;
	while (a1 == a2)
	{
		a1 = *s1++;
		a2 = *s2++;
		if (a1 == '\0')
			return (a1 - a2);
	}
	return (a1 - a2);
}
