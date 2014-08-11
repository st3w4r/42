/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 14:04:32 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/01 12:21:34 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_putint(int a);
int ft_putchar(char c);
void ft_div_mod(int *a, int *b);

int main()
{
	/*
	int a;
	int *ptr;
	int **ptr2;

	a = 50;
	ptr = &a;
	ptr2 = &ptr;

	printf("%d", **ptr2);
	**ptr2 = 42;
	ft_ft(&ptr2);
	printf(" %d", a);
*/
/*
int a;
int b;
int *div;
int *mod;
int tdiv;
int tmod;

a = 20;
b = 5;
tdiv = 0;
div = &tdiv;
mod = &tmod;

ft_div_mod(a, b, &tdiv, &tmod);
printf("%d ", *div);
printf("%d", *mod);
*/

int a;
int b;
int *div;
int *mod;
int tdiv;
int tmod;

a = 20;
b = 5;


ft_div_mod(a, b, div);
printf("%d ", *div);
printf("%d", *mod);

/*
int *a;
int *b;
int *div;

*a = 20;
*b = 5;

ft_div_mod(a, b, div);
printf("%d ", *div);
printf("%d", a);
*/
	return (0);
}


void ft_div_mod(int *a, int *b, int *div)
{
	*div = *a / *b;

}
