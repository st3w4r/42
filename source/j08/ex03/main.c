/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 12:37:17 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/09 12:44:24 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_point.h"
#include <stdio.h>
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int main(void)
{
	t_point point;
	set_point(&point);
	printf("x: %d y: %d", point.x, point.y);
	return (0);
}
