/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 14:04:32 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/03 11:25:09 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_putint(int a);
int ft_putchar(char c);
void ft_ultimate_div_mod(int *a, int *b);

int main()
{

int *a;
int *b;

int ta;
int tb;

a = &ta;
b = &tb;

*a = 21;
*b = 4;

ft_ultimate_div_mod(a, b);
printf("%d ", *a);
printf("%d ", *b);
	return (0);
}

/*
void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp_a;
	int tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = tmp_a / tmp_b;
	*b = tmp_a % tmp_b;
}
*/
