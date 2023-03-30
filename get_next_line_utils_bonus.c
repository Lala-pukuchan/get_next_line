/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kobayashi <kobayashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 07:53:07 by rukobaya          #+#    #+#             */
/*   Updated: 2022/12/12 19:37:13 by kobayashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_strndup(const char *s, int size)
{
	char	*p;

	p = (char *)malloc(size + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s, size + 1);
	return (p);
}

char	*ft_strjoin(const char	*s1, const char	*s2)
{
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	p = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strlcpy(p + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (p);
}

size_t	ft_strchr_idx(const char *s, int c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(s) + 1;
	while (i < n)
	{
		if (s[i] == (char)c)
			return (i);
		i++;
	}
	return (-1);
}
