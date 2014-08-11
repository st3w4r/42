/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/08 16:04:09 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/08 23:36:13 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char **ft_split_whitespaces(char *str)
{
	char	**str_split;
	char	**str_tmp;
	int		len;
	int		i;
	int		count_word;

	count_word = 0;
	len = 0;
	i = 0;
	while (str)
	{
		if (str[len] != 9 || str[len] != 32 || str[len] != '\n')
			count_word++;
		len++;
	}
	*str_split = (char*)malloc(sizeof(char) * (len + 1));
	len = 0;
	while (len < count_word)
	{
		i = 0;
		while (str[i] != 9 || str[i] != 32 || str[i] != '\n' || str[i] != '\0')
		{
			str_tmp[i] = str[i];
			i++;
		}
		str_split[len] = str_tmp;
		len++;
	}
	return (str_split);
}
