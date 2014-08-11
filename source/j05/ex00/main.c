/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:09:00 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/06 20:56:19 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
void ft_putstr(char *str);

int main(void)
{
	char str_src[]	= "Hello";
	char str_dest[]	= "Salut";
	
	printf(" %s ", strcpy(str_dest, str_src));
	printf(" %s ", str_dest);
//	ft_strcpy(str_dest, str_src);
//	ft_putstr(str_src);
//	ft_putstr(str_dest);
	return (0);
}

