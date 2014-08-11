/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:09:00 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/06 20:52:28 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

//char *strcat(char *dest, const char *src);
char *ft_strcat(char *dest, char *src);

int main(void)
{
	const char src1[10]	= "abc";
	char dest1[10]   = "123";

	char src[10]	= "abc";
	char dest[10]	= "123";
	//strcat(src, dest);
	printf("Str: %s \n", strcat(dest1, src1));
	printf("Str: %s", ft_strcat(dest, src));
	return (0);
}
