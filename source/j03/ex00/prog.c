/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/02 09:26:59 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/03 22:00:04 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* **************************************************************************i */
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);
void	ft_ft(int *nbr);
int		main(void)
{	
	int	a;

	a = 3;
	printf("%d", a);
	ft_ft(&a);	
	printf(" %d", a);


	return (0);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
