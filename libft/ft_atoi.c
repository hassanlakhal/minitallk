/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:05:45 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/01 18:07:00 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_resulte(const char *str, int i, int sing)
{
	long	resulte;

	resulte = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (resulte * 10 + str[i] - 48 < resulte)
		{
			if (sing == -1)
				return (0);
			else
				return (-1);
		}
		resulte = resulte * 10 + str[i] - 48;
		i++;
	}
	return (resulte);
}

int	ft_atoi(char *str)
{
	int		sing;
	int		i;
	long	resulte;

	i = 0;
	sing = 1;
	resulte = 0;
	while (str[i] == 32 || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		sing *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	resulte = ft_resulte(str, i, sing);
	return (resulte * sing);
}
