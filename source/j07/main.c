/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/07 16:59:04 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/09 22:56:25 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//#include <stdlib.h>

char *ft_strdup(char *src);
int *ft_range(int min, int max);
int ft_ultimate_range(int **range, int min, int max);
char *ft_concat_params(int argc, char **argv);
char **ft_split_whitespaces(char *str);

int main(int argc, char **argv)
{
//	char	*str;
//	char	*str2;
//	int		*tab;
//	int		*tab_ulti;
//	int i;

/* //Ex00
	str = "42 school";
	str2 = ft_strdup(str);
	
	printf("%s", str);
	printf("%s", str2);
*/	
/*
	//Ex01
	tab = ft_range(10, 20);
	
	i = 0;
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
*/
/*
	//Ex02
	int i = ft_ultimate_range(&tab_ulti,10, 30);
	int j =  0;

	printf("Nb %d - ", i);
	while (j < 30)
	{
		printf("%d ", tab_ulti[j]);
		j++;
	}
*/
 //Ex03
	printf("%s", ft_concat_params(argc, argv));

	
	return (0);
}
