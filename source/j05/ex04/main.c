/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:09:00 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/05 23:51:50 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int strncmp(const char *s1, const char *s2, size_t n);
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	const	char str1[]	= "aaaacde";
	const	char str2[]	= "aaa";

  	char str3[] = "aaaacde";
	char str4[] = "aaa";
	//	unsigned int nb = 2;

	printf("Strncmo: %d ", strncmp(str1, str2, 0));
	printf("ft_strncmp: %d ", ft_strncmp(str3, str4, 0));
//	printf("src: %s ", str1);
//	printf("Search: %s ",  str2);
	return (0);
}
