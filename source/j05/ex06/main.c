/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:09:00 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/06 13:11:13 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str1[] = "Salut les gars Connent ))0as3223412334@$!@#$#@ $3241`123 '0 OOO ooo !";
	printf("Original: %s ", str1);
	printf("Final: %s ", ft_strlowcase(str1));

	return (0);
}
