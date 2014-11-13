/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:24:44 by ybarbier          #+#    #+#             */
/*   Updated: 2014/11/06 11:28:06 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	char			*str;
	unsigned int	counter;

	str = (char *)s;
	if (str && f)
	{
		counter = 0;
		while (str[counter])
		{
			(*f)(&str[counter]);
			counter++;
		}
	}
}
