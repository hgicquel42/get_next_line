/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:46:02 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/26 11:42:33 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_error(void)
{
	return (0);
}

int	ft_read(int fd, char *buffer)
{
	ssize_t	length;

	length = read(fd, buffer, BUFFER_SIZE);
	if (!length)
		return (0);
	return (1);
}

char	*ft_join(char *a, size_t la, char *b, size_t lb)
{
	char	*r;
	size_t	i;

	r = malloc(l + i);
	if (!r)
		return (0);
	i = -1;
	while (++i < la)
		r[i] = a[i];
	i = -1;
	while (++i < lb)
		r[i + la] = b[i];
	return (r);
}

char	*ft_readline(int fd)
{
	static char		*save;
	static size_t	length;
	char			*buffer;
	size_t			index;
	char			*result;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = malloc(BUFFER_SIZE);
	if (!buffer)
		return (0);
	index = 0;
	while (1)
	{
		if (!ft_read(fd, buffer))
			return (ft_error());
		index = ft_strchr(buffer, '\n');
		if (index)
		{
			line = ft_join(save, buffer, index));
			save = buffer + index;

		}
		
	}
}

char	*get_next_line(int fd)
{
	return (ft_readline(fd));
}
