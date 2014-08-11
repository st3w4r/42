/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:09:00 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/05 19:35:56 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char *ft_strstr(char *src, char *to_find);

int main(void)
{
	char str_src[]	= "Helloa";
	char str_find[]	= "lo";

	printf("Text: %s ", ft_strstr(str_src, str_find));
	printf("src: %s ", str_src);
	printf("Search: %s ",  str_find);
	return (0);
}
