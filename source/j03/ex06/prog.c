/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/02 09:26:59 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/02 14:05:35 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* **************************************************************************i */
#include <unistd.h>

int ft_putchar(char c);
void ft_swap(int *a, int *b);

int main(void)
{
	int *a;
	int *b;
	int va;
	int vb;
	
	va = 2;
	vb = 4;
	a = &va;
	b = &vb;

    ft_putchar(*a + '0');
	ft_putchar(' ');
	ft_putchar(*b + '0');

	ft_swap(a, b);
	ft_putchar(*a + '0');
	ft_putchar(' ');
	ft_putchar(*b + '0');
	
	return (0);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
