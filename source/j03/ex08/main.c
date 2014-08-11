/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 21:01:24 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 23:28:59 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);
void    putnbr(int n);
void ft_putchar(char c);

int main(void)
{
	int num;
	num = 0;
	num = atoi("+90123 qwe");	
	printf("%d", num);
	return 0;
}

void    putnbr(int n)
{
	if (n >= 10)
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
	else
	  putchar(48 + n);
}
