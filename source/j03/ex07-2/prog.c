/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/02 09:26:59 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 15:59:46 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* **************************************************************************i */
#include <unistd.h>
#include <stdio.h>
int ft_putchar(char c);
int ft_putnbr(int n);
char *ft_strrev(char * str);

int main(void)
{
	char text[] = "Salut";

	printf("%s", ft_strrev(text));
	
	return (0);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}


int ft_putnbr(int n)
{
	if (n >= 10)
	{
		 ft_putnbr(n / 10);
		 ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(48 + n);
	}
	return 0;
}
