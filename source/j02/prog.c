/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 14:04:32 by ybarbier          #+#    #+#             */
/*   Updated: 2014/07/31 18:27:19 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void);
int ft_putchar(char c);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);

int main()
{
	ft_print_alphabet();
	return (0);
}


void ft_print_reverse_alphabet(void)
{
    int i;
	i = 'z';
	while (i >= 'a') {
		ft_putchar(i);
		i--;
	}
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_numbers(void)
{
	int i;
	i = 48;
	while (i <= 57)
	{
		ft_putchar(i);
		i++;
	}
}

void ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar(48 + a), ft_putchar(48 + b), ft_putchar(48 + c);
				if (!(a == 7 && b == 8 && c == 9))
					ft_putchar(','), ft_putchar(' ');
				c++;
			}
			b++;
		}
		a++;
	}
}
