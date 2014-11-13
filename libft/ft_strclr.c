/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:52:20 by ybarbier          #+#    #+#             */
/*   Updated: 2014/11/05 19:06:55 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strclr(char *s)
{
	char			*str;
	unsigned int	counter;

	str = (char *)s;
	counter = 0;
	if (str)
	{
		while (str[counter])
		{
			str[counter] = '\0';
			counter++;
		}
	}
}
