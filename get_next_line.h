/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukobaya <rukobaya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 07:26:11 by rukobaya          #+#    #+#             */
/*   Updated: 2022/08/14 09:42:36 by rukobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
#define GET_NEXT_LINE

#define FD_MAX 1024

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strndup(const char *s, int size);
char	*ft_strjoin(char const *s1, char const *s2);
size_t  ft_strchr_idx(const char *s, int c);

#endif
