/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 10:18:31 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/06 10:53:55 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int     ft_iterative_power(int nb, int power);
int		ft_putchar(void);

int		main(void)
{
	int nb;

	nb = ft_iterative_power(30, 122);
	printf("%d", nb);
	return (0);
}
