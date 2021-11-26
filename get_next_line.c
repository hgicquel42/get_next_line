/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:46:02 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/26 15:03:30 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *a, char *b)
{
	size_t	i;
	size_t	la;
	size_t	lb;
	char	*r;

	if (!a)
		a = ft_empty();
	if (!b)
		return (0);
	la = ft_strlen(a);
	lb = ft_strlen(b);
	r = malloc(la + lb + 1);
	if (!r)
		return (0);
	i = -1;
	while (a[++i])
		r[i] = a[i];
	i = -1;
	while (b[++i])
		r[i + la] = b[i];
	r[la + lb] = 0;
	free(a);
	return (r);
}

char	*ft_parse(char *s)
{
	int		i;
	char	*r;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		return (ft_strdup(s, i + 1));
	else
		return (ft_strdup(s, i));
}

char	*ft_save(char *s)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
		return (ft_free(s));
	r = malloc(ft_strlen(s) - i + 1);
	if (!r)
		return (0);
	j = 0;
	while (s[++i])
		r[j++] = s[i];
	r[j] = 0;
	free(s);
	return (r);
}

char	*ft_read(int fd, char *s)
{
	char	*b;
	int		l;

	b = malloc(BUFFER_SIZE + 1);
	if (!b)
		return (0);
	while (!ft_strchr(s, '\n'))
	{
		l = read(fd, b, BUFFER_SIZE);
		if (l == -1)
			return (ft_free(b));
		b[l] = 0;
		s = ft_strjoin(s, b);
		if (l == 0)
			break ;
	}
	free(b);
	return (s);
}

char	*get_next_line(int fd)
{
	static char	*a;
	char		*r;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	a = ft_read(fd, a);
	if (!a)
		return (0);
	r = ft_parse(a);
	a = ft_save(a);
	return (r);
}
