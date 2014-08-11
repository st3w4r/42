/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 10:18:31 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 18:02:11 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int     ft_recursive_power(int nb, int power);
int		ft_putchar(void);

int		main(void)
{
	int nb;

	nb = ft_recursive_power(2, 4);
	printf("%d", nb);
	return (0);
}
