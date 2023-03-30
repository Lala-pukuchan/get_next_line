/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kobayashi <kobayashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 07:24:54 by rukobaya          #+#    #+#             */
/*   Updated: 2022/12/12 19:58:11 by kobayashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_append_buf_to_save(char *buf, char *save, int size)
{
	char	*tmp;

	buf[size] = '\0';
	if (!save)
	{
		save = ft_strndup(buf, ft_strlen(buf));
	}	
	else
	{
		tmp = ft_strjoin(save, buf);
		free(save);
		save = tmp;
	}
	return (save);
}

char	*ft_read_file(int fd, char *save)
{
	int		size;
	char	buf[BUFFER_SIZE + 1];

	while (1)
	{
		size = read(fd, buf, BUFFER_SIZE);
		if (size == -1)
		{
			if (!save)
				free(save);
			save = NULL;
			return (NULL);
		}
		if (size == 0)
			break ;
		save = ft_append_buf_to_save(buf, save, size);
		if (!save)
			return (NULL);
		if (ft_strchr_idx(save, '\n') != (unsigned long) - 1)
			break ;
	}
	return (save);
}

char	*ft_create_line(char	*save)
{
	int		n_idx;
	char	*line;

	n_idx = ft_strchr_idx(save, '\n');
	if (n_idx == -1 || ((unsigned long)n_idx == (ft_strlen(save) - 1)))
		line = ft_strndup(save, ft_strlen(save));
	else
		line = ft_strndup(save, n_idx + 1);
	return (line);
}

char	*ft_save_remain(char	*save)
{
	int		n_idx;
	char	*tmp;

	tmp = NULL;
	n_idx = ft_strchr_idx(save, '\n');
	if ((unsigned long)n_idx == (ft_strlen(save) - 1))
		tmp = NULL;
	else if (n_idx != -1)
		tmp = ft_strndup(&save[n_idx + 1], ft_strlen(save) - (n_idx + 1));
	free(save);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*save[OPEN_MAX];
	char		*line;

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE < 1)
		return (NULL);
	save[fd] = ft_read_file(fd, save[fd]);
	if (!save[fd] || !*save[fd])
		return (NULL);
	line = ft_create_line(save[fd]);
	save[fd] = ft_save_remain(save[fd]);
	return (line);
}
