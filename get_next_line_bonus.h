/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:45:57 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/26 15:44:55 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

size_t	ft_strlen(char *s);

char	*ft_free(char *s);

char	*ft_empty(void);

int		ft_putstr(char *s);

char	*ft_strdup(char *s, size_t l);

char	*ft_strchr(char *s, char c);

char	*get_next_line(int fd);

char	*ft_read(int fd, char *s);

char	*ft_strjoin(char *a, char *b);

char	*ft_parse(char *s);

char	*ft_save(char *s);

#endif