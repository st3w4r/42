/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 11:12:06 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/11 23:30:50 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include "ex02/ft_abs.h"
#include "ex04/ft_stock_par.h"

int main(int argc, char **argv)
{
//	ft_putchar(ABS('A'));
	t_stock_par s_stock;
	s_stock = ft_param_to_tab(argc, argv);
	return (0);
}
