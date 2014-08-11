/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 11:12:06 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/09 01:39:57 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft.h"

#define TEXT "42 Born2Code !"
#define TEST(x) int x;
#define TEST2(x) #x;
#define TEST3(x) TEST2(x) TEST2(x)

#define TEST4

#ifdef TEST4

typedef char* char_p

struct s_point
{
	int x;
	int y;
}

enum e_list
{
	val1,
	val2 = 5,
	val3 // Vaudra 6
};

int  main(void)
{
	struct s_point a;
	struct s_point b;
	a.y = 12;
	a.x = 42;
	b = a;
	ptr = &a;
//	(*ptr).x;
	ptr->x;

	enum e_list a;

	a = val1;

	char_p str = TEXT;
	TEST(a)
	TEST(b)
	TEST2(42 school)
	TEST3(OK Great)
	ft_putstr(str);
	printf(" %d \n", ft_strlen(str));

	return (0);
}
#endif
