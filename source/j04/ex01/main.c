/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 10:18:31 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 13:04:45 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_recursive_factorial(int nb);
int		ft_putchar(void);

int		main(void)
{
	int nb;

	nb = ft_recursive_factorial(0);
	printf("%d", nb);
	return (0);
}
