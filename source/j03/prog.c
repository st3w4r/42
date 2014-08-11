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
#include <unistd.h>

int ft_putint(int a);
int ft_putchar(char c);
void ft_ft(int *nbr);

int main()
{
	int a;
	int *b;
	a = 50;
	b = &a;

	printf("%d",a);
	ft_ft(b);
	printf("%d",a);

	return (0);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int ft_putint(int a)
{
	write(1, &a, 1);
	return (0);
}
