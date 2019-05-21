/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 15:50:54 by event             #+#    #+#             */
/*   Updated: 2019/05/21 12:30:59 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
