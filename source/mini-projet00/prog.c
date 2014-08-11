/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 14:04:32 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 18:07:57 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_putint(int a);
int ft_putchar(char c);
void ft_ft(int *nbr);
void sastantua(int size);

int main()
{
	sastantua(5);
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
