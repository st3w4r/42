/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 14:04:32 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/03 22:38:39 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_putint(int a);
int ft_putchar(char c);
void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{

int a;
int b;
int *ptr_div;
int *ptr_mod;
int div;
int mod;

a = 20;
b = 4;

ptr_div = &div;
ptr_mod = &mod;

ft_div_mod(a, b, ptr_div, ptr_mod);
printf("%d ", *ptr_div);
printf("%d", *ptr_mod);

	return (0);
}
