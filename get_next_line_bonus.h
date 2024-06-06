/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:19:46 by arissane          #+#    #+#             */
/*   Updated: 2024/06/06 11:25:31 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

size_t	strlen_gnl(char	*str, char c);
char	*strchr_gnl(char *str, int c);
char	*strjoin_gnl(char *saved_text, char *buffer);
char	*substr_gnl(char *saved_text, size_t start, size_t len, size_t i);
char	*get_next_line(int fd);

#endif
