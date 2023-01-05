/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   servire.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 02:56:09 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/01/05 04:51:51 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<signal.h>

void handle(int sig)
{
	static int i;
	static int j;
	if(sig == SIGUSR1)
	{
		if(i % 2 == 0)
			printf(" abcd %c\n",i);
	}
	else
		printf("hassan %c",i);
	i++;
}
int main(int argc, char **argv)
{
	pid_t pid;
	pid = getpid();
	printf("hello of the server pid ---> %d\n",pid);
	signal(SIGUSR1,handle);
	signal(SIGUSR2,handle);
	while (1)
	;
}
