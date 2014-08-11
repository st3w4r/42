/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 11:12:06 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/08 09:28:55 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void ft_putstr(char *str);
int ft_strlen(char *str);
int main(void)
{
	
	ft_putstr("Hello world !");
	printf("%d \n", ft_strlen("Salut"));
	return (0);
}
