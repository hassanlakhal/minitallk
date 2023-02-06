/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   servire.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 02:56:09 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/06 17:41:46 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitallk.h"

void	handle(int sig)
{
	static int	i;
	static int	j;

	j++;
	if (sig == SIGUSR1)
		i = (i | 1);
	if (j == 8)
	{
		ft_putchar_fd(i, 1);
		j = 0;
		i = 0;
	}
	else
		i = i << 1;
}

int	main(int argv,char **argc)
{
	pid_t	pid;
	(void) argc;
	if(argv == 1)
	{
		pid = getpid();
		ft_printf("hello of the server pid ---> %d\n", pid);
		signal(SIGUSR1, handle);
		signal(SIGUSR2, handle);
		while (1)
			;
	}
}
