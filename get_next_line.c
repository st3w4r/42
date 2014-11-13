/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:05:23 by ybarbier          #+#    #+#             */
/*   Updated: 2014/11/13 16:50:13 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t		ft_len_c_stop(const char *str, int start, char c_stop)
{
	size_t		counter;

	if (!str)
		return (0);
	counter = 0;
	while (str[start] && (str[start] != c_stop))
	{
		start++;
		counter++;
	}
	return (counter);
}

static int ft_retln(char *str, char **line, char **save_buf)
{
	int len_str;

	len_str = 0;
	if (ft_strchr(str, '\n') == 0)
	{
		*line = ft_strjoin(*line, str);
	}
	else
	{
		len_str = ft_len_c_stop(str, 0, '\n');
		*line = ft_strjoin(*line, ft_strsub(str, 0, len_str));
		*save_buf = ft_strsub(str, len_str + 1, ft_strlen(str) - len_str);
		return (1);
	}
	return (0);
}

static int ft_read_line(int fd, char *buf, char **line)
{
	int ret;
	static int is_read;
	static char *save_buf;

	if (!save_buf)
		save_buf = ft_strdup("");
	if (ft_retln(save_buf, line, &save_buf) == 1)
	{
		is_read = 1;
		return (1);
	}
	save_buf = ft_strdup("");

	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = 0;
	
		if (ft_retln(buf, line, &save_buf) == 1)
			return (1);
		is_read = 1;
	}
	if (ft_strcmp(save_buf, ""))
	{
		is_read = 0;
		return (1);
	}
	return (0);
}

int get_next_line(int const fd, char **line)
{
	char *buf;

	if (!(buf = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	buf[0] = 0;
	*line = ft_strdup("");
	return (ft_read_line(fd, buf, line));
}
