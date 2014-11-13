/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 22:10:47 by ybarbier          #+#    #+#             */
/*   Updated: 2014/11/08 16:37:30 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar_fd('-', fd);
	}
	else
		nb = n;
	if (nb >= 10)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putchar_fd(((nb % 10) + '0'), fd);
	}
	else
	{
		if (n > 0)
			ft_putchar_fd(('0' + n), fd);
		else
			ft_putchar_fd(('0' - n), fd);
	}
}
