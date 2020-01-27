/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhochstr <nhochstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:24:06 by nhochstr          #+#    #+#             */
/*   Updated: 2020/01/27 15:18:15 by nhochstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int argc, char const *argv[])
{
	int fd = 0;
	char *line;
	int endl = 1;

	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		endl = 1;
		while (endl > 0)
		{
			endl = get_next_line(fd, &line);
			printf("endl: %i | %s\n",endl, line);
			free(line);
			line = NULL;
		}
		close(fd);
	}
	return (0);
}

