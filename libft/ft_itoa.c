/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 22:46:21 by ybarbier          #+#    #+#             */
/*   Updated: 2014/11/10 14:46:11 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				*ft_nbrstr(int n, char *str, unsigned int pos)
{
	unsigned int	nb;

	pos--;
	if (n < 0)
	{
		nb = -n;
		str[0] = '-';
	}
	else
		nb = n;
	if (nb >= 10)
	{
		ft_nbrstr((nb / 10), str, pos);
		str[pos] = ((nb % 10) + '0');
	}
	else
		str[pos] = (nb + '0');
	return (str);
}

static unsigned int		ft_lennbr(int n)
{
	unsigned int	count;
	unsigned int	nb;

	count = 0;
	if (n < 0)
	{
		nb = (unsigned int)-n;
		count++;
	}
	else
		nb = (unsigned int)n;
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char					*ft_itoa(int n)
{
	unsigned int	len;
	char			*str;

	len = ft_lennbr(n);
	if (n == 0)
	{
		if (!(str = ft_strnew(1)))
			return (NULL);
		str[0] = '0';
	}
	else
	{
		if (!(str = ft_strnew(len)))
			return (NULL);
		str = ft_nbrstr(n, str, len);
	}
	return (str);
}
