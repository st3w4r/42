/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 13:27:27 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/06 16:18:33 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_str_is_alpha(char *str);

int main(void)
{
//	char str[] = "salut, COMMENT tU v7As ? 42mots quarante-deux; cinquante+et+un";
	char str[] = "";
//	printf("%d \n", str);
	printf("%d", ft_str_is_alpha(str));
	return (0);
}
