/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:09:00 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/06 21:27:27 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, int nb);

int main(void)
{
	const char src1[10]	= "abc";
	char dest1[10]   = "1234";

	char src[10]	= "abc";
	char dest[10]	= "1234";
	//strcat(src, dest);
	printf("Str: %s \n", strncat(dest1, src1, 1));
	printf("Str: %s", ft_strncat(dest, src, 1));
	return (0);
}
