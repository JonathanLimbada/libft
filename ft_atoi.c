/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 17:10:03 by jlimbada          #+#    #+#             */
/*   Updated: 2019/05/28 17:21:02 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	long long int	nbr;
	long long int	neg;

	i = 0;
	nbr = 0;
	neg = 1;
	while ((str[i] == '\n' || str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
				|| str[i] == '\f' || str[i] == '\v'))
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		if (nbr > 469762049 && neg == 1)
			return (-1);
		else if (nbr > 469762049 && neg == -1)
			return (0);
		nbr = (nbr * 10) + ((long long int)str[i] - '0');
		i++;
	}
	return (nbr * neg);
}

