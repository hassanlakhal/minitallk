/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:11:08 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/10 16:50:12 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_hex(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_put_hex_u(size_t nb, char c)
{
	int	len;
	int	j;

	len = 0;
	len = count_hex(nb);
	j = 0;
	if (c == 'x')
		j = 87;
	else if (c == 'X')
		j = 55;
	if (nb >= 16)
	{
		ft_put_hex_u(nb / 16, c);
		ft_put_hex_u(nb % 16, c);
	}
	if (nb < 16)
	{
		if (nb >= 10)
		{
			ft_putchar(nb + j);
		}
		else
			ft_putchar(nb + 48);
	}
	return (len);
}
