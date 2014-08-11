/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:09:00 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/06 22:35:54 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

//char *ft_strncat(char *dest, char *src, int nb);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	const char src1[10]	= "ab";
	char dest1[10]   = "123";

	char src[10]	= "ab";
	char dest[10]	= "123";

	size_t 			nb = 2;
	unsigned int 	nb2 = 2;
	//strcat(src, dest);
	printf("Str: %ld \n", strlcat(dest1, src1, nb));
	printf("Str: %u", ft_strlcat(dest, src, nb2));
	return (0);
}
