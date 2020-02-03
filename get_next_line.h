/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhochstr <nhochstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:25:07 by nhochstr          #+#    #+#             */
/*   Updated: 2020/02/03 15:43:00 by nhochstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int				get_next_line(int fd, char **line);
unsigned long	ft_n(char *str, int line);
char			*ft_join(char *s1, char *s2);
void			ft_bzero(void *s, size_t n);
int				ft_get_line(char *buff, char **line, int reset);
int				ft_resetbuleffer(char **buff, int endline, int fd, char **line);
char			*ft_del_return_line(char *str);
char			*ft_strdup(char *s);
int				ft_returnfreebuff(int endline, char *buff);
void			ft_freeptr(char *ptr);

#endif
