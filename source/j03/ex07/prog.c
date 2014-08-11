/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/02 09:26:59 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 14:16:27 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* **************************************************************************i */
#include <unistd.h>

int ft_putchar(char c);
int ft_putnbr(int n);
char *ft_strrev(char * str);

int main(void)
{
	char text_str[] = "super";
		
	int counter;
	counter = 0;
	while (ft_strrev(&text_str[0])[counter] != '\0')
	{
		//ft_putnbr(counter);
		ft_putchar(ft_strrev(&text_str[0])[counter]);
		counter++;
	 }	

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
