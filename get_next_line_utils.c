/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:46:00 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/26 15:10:45 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *s)
{
	free(s);
	return (0);
}

char	*ft_empty(void)
{
	char	*r;

	r = malloc(1);
	if (!r)
		return (0);
	r[0] = 0;
	return (r);
}

size_t	ft_strlen(char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

char	*ft_strdup(char *s, size_t l)
{
	char	*r;
	size_t	i;

	r = malloc(l + 1);
	if (!r)
		return (0);
	i = -1;
	while (++i < l)
		r[i] = s[i];
	r[l] = 0;
	return (r);
}

char	*ft_strchr(char *s, char c)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return (s + i);
	return (0);
}
