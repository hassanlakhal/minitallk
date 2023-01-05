/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 02:36:39 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/01/05 04:48:56 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<signal.h>
#include<sys/types.h>

void send_message(pid_t pid, char c)
{
	int bit;
	bit = 0;
	while (bit < 8)
	{
		if (c % 2 == 0)
			kill(pid,SIGUSR1);
		else
			kill(pid,SIGUSR2);
		c = c / 2;
		bit++;
	}
}

int main(int argc, char **argv)
{

	pid_t pid;
	int i;
	i = 0;
	if (argc == 3 )
	{
		pid = atoi(argv[1]);
		while (argv[2][i])
		{
			send_message(pid,argv[2][i]);
			i++;
		}
		send_message(pid,'\n');
	}
	else
		printf(" plese entrer <message> and <pid>\n");


}
