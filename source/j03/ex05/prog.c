/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/02 09:26:59 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/02 13:30:26 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* **************************************************************************i */
#include <unistd.h>

int	ft_strlen(char *str);
int ft_putchar(char c);

int main(void)
{
	char text[] = "123456789";
	char *str;
	int len;

	str = &text[0];

	len = ft_strlen(str);
	ft_putchar(len + '0');
	return (0);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
