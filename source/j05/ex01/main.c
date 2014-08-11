/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:09:00 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/05 20:37:10 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
void ft_putstr(char *str);

int main(void)
{
	char str_src[]	= "Hellooooooooooooo";
	char str_dest[]	= "Salut";

	ft_strncpy(str_dest, str_src, 1);
	ft_putstr(str_src);
	ft_putstr(str_dest);
	return (0);
}
