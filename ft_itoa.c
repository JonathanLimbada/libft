/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 08:06:14 by jlimbada          #+#    #+#             */
/*   Updated: 2019/06/03 10:00:52 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isneg(int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
		x = 1;
	return (x);
}

static char		*check_min(char *minint)
{
	int		i;
	char	*min;

	i = 0;
	if (!(min = ft_strnew(11)))
		return (NULL);
	while (i < 11)
	{
		min[i] = minint[i];
		i++;
	}
	return (min);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*ret;
	int		neg;

	neg = ft_isneg(n);
	len = ft_intlen(n);
	ret = ft_strnew(len);
	if (n == -2147483648)
		return (check_min(MININT));
	if (n == 0)
	{
		ret = ft_strnew(1);
		ret[0] = '0';
		return (ret);
	}
	if (neg == 1)
		n = n * -1;
	while (len > 0)
	{
		ret[--len] = (n % 10) + '0';
		n = n / 10;
	}
	if (neg == 1)
		ret[0] = '-';
	return (ret);
}
