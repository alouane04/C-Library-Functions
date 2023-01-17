/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:54:26 by ariahi            #+#    #+#             */
/*   Updated: 2023/01/17 15:05:31 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define BUFFER_SIZE 1024

size_t	ft_strlen_utils(const char *s);
char	*ft_strchr_utils(char *s, int c);
char	*ft_strjoin_utils(char *s, char *buff);
char	*get_next_line(int fd);
char	*get_the_line(char *buffer);
char	*get_the_res(char *buffer);
char	*get_the_buffer(int fd, char *buffer);

#endif