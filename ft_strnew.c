/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:57:59 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/31 08:54:47 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*pr;
	size_t	i;

	pr = (char *)malloc(size + 1);
	if (pr == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		pr[i] = '\0';
		i++;
	}
	pr[i] = '\0';
	return (pr);
}
