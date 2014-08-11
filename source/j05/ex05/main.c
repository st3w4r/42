/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:09:00 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/06 13:07:54 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str1[] = "Salut les gars Comment WWwww 000 !";
	printf("Original: %s ", str1);
	printf("Final: %s ", ft_strupcase(str1));

	return (0);
}
