/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 23:10:05 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/10 17:30:55 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int match(char *s1, char *s2);
int nmatch(char *s1, char *s2);

int main(int argc, char **argv)
{
	int i;
	
	if (argc != 3)
		return (0);
	i = nmatch(argv[1], argv[2]);
	ft_putchar(i + '0');
	return (0);
}
