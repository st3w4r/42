/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 10:18:31 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 20:47:43 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_sqrt(int nb);
int		ft_putchar(void);

int		main(void)
{
	int nb;

	nb = ft_sqrt(49);
	printf("%d", nb);
	return (0);
}
