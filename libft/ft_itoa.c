/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:36:25 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/10/31 15:08:35 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	number_chifr(long int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

static char	*cpy(char *str, long int n, int len)
{
	long int	j;
	char		*pt;

	j = 0;
	pt = (char *)str;
	pt[len] = '\0';
	while (sizeof(n) == sizeof(long int) && n)
	{
		j = n / 10;
		if (j == 0)
		{
			ft_memset(pt + len - 1, n + '0', sizeof(char));
			n = 0;
			len--;
		}
		if (j)
		{
			n = n % 10 + '0';
			ft_memset(pt + len - 1, n, sizeof(char));
			len--;
			n = j;
		}
	}
	return ((char *)pt);
}

char	*ft_itoa(int n)
{
	char		*pt;
	int			len;
	long int	x;

	x = (long int)n;
	len = number_chifr(x);
	pt = (char *)malloc((len + 1) * sizeof(char));
	if (!pt)
		return (NULL);
	if (x < 0)
	{
		x *= -1;
		pt = (char *)cpy(pt, x, len);
		pt[0] = '-';
	}
	else if (x > 0)
	{
		pt = (char *)cpy(pt, x, len);
	}
	else
	{
		pt[0] = '0';
		pt[1] = '\0';
	}
	return ((char *)pt);
}
