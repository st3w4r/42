/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/02 09:26:59 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/02 10:57:54 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* **************************************************************************i */
#include <unistd.h>

void	ft_putstr(char *str);

int main(void)
{
	ft_putstr("Ok 42");
	return (0);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
