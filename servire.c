/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   servire.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 02:56:09 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/02 22:48:07 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<signal.h>
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void handle(int sig)
{
	static int i;
	static int j;
	j++;
	if(sig == SIGUSR1)
		i = (i | 1);
	if(j == 8)
	{
		ft_putchar_fd(i,1);
		j = 0;
		i = 0;
	}
	else
		i = i << 1;
}
int main(int argc, char **argv)
{
	pid_t pid;
	pid = getpid();
	printf("hello of the server pid ---> %d\n",pid);
	while (1)
	{
		signal(SIGUSR1,handle);
		signal(SIGUSR2,handle);
		pause();
	}
}
