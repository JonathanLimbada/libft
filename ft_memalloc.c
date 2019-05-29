/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:38:01 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/29 13:43:44 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*pt;

	pt = malloc(size);
	if (pt == NULL)
		return (NULL);
	else
		ft_memset(pt, '\0', size);
	return (pt);
}
