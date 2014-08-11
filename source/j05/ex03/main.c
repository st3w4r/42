/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:09:00 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/05 23:05:29 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int strcmp(const char *s1, const char *s2);
int ft_strcmp(char *s1, char *s2);

int main(void)
{
		char str1[]	= "aaa";
		char str2[]	= "aaab";

	//printf("Strcmo: %d ", strcmp(str1, str2));
	printf("ft_strcmp: %d ", ft_strcmp(str1, str2));
	printf("src: %s ", str1);
	printf("Search: %s ",  str2);
	return (0);
}
