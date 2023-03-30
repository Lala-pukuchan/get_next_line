/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kobayashi <kobayashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 07:26:11 by rukobaya          #+#    #+#             */
/*   Updated: 2022/12/12 20:01:55 by kobayashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(const char	*s);
char	*ft_strndup(const char	*s, int size);
char	*ft_strjoin(const char	*s1, const char	*s2);
size_t	ft_strchr_idx(const char	*s, int c);

#endif
