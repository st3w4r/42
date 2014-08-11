/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:09:00 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/06 23:01:30 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

//char *ft_strncat(char *dest, char *src, int nb);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	const char src1[10]	= "ab121";
	char dest1[10]   = "12123123";

	char src[10]	= "ab121";
	char dest[10]	= "12123123";

	size_t 			nb = 8;
	unsigned int 	nb2 = 8;
	//strcat(src, dest);
	printf("Str: %ld \n", strlcpy(dest1, src1, nb));
	printf("Str: %u", ft_strlcpy(dest, src, nb2));
	return (0);
}
