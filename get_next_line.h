/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:45:57 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/26 14:58:08 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 16
# endif

size_t	ft_strlen(char *s);

char	*ft_free(char *s);

char	*ft_empty(void);

int		ft_putstr(char *s);

char	*ft_strdup(char *s, size_t l);

char	*ft_strchr(char *s, char c);

char	*get_next_line(int fd);
char	*ft_read(int fd, char *left_str);
char	*ft_strjoin(char *left_str, char *buff);
char	*ft_parse(char *left_str);
char	*ft_save(char *left_str);

#endif