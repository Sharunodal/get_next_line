/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:22:05 by arissane          #+#    #+#             */
/*   Updated: 2024/06/06 11:24:41 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd;
	int		fd_bonus;
	int		i;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	fd_bonus = open("bonus.txt", O_RDONLY);
	while (i < 2)
	{
		printf("%s", get_next_line(fd));
		printf("%s", get_next_line(fd_bonus));
		i++;
	}
	close(fd);
	close(fd_bonus);
	return (0);
}
