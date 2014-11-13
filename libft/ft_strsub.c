/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:49:55 by ybarbier          #+#    #+#             */
/*   Updated: 2014/11/08 14:53:08 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*str_new;
	unsigned int	counter;

	if (!(str_new = ft_strnew(len)) || !s)
		return (NULL);
	str = (char *)s;
	counter = 0;
	while (counter < len)
	{
		str_new[counter] = str[start];
		start++;
		counter++;
	}
	return (str_new);
}
