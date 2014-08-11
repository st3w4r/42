/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 13:27:27 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/06 15:18:29 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strcapitalize(char *str);

int main(void)
{
	char str[] = "salut, COMMENT tU v7As ? 42mots quarante-deux; cinquante+et+un";
//	char str[] = "SALUT";
	printf("%s \n", str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}
