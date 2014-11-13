/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:24:38 by ybarbier          #+#    #+#             */
/*   Updated: 2014/11/08 15:24:40 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	result;

	if (!dst || !src)
		return (0);
	i = 0;
	j = 0;
	result = ft_strlen(src);
	while (dst[i] && i < size)
		i++;
	if (size > 0)
	{
		while (src[j] && i < size - 1)
		{
			dst[i++] = src[j++];
		}
	}
	if (j > 0)
	{
		dst[i] = '\0';
		return (result + i - j);
	}
	return (result + i);
}
