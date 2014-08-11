/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 20:39:09 by ybarbier          #+#    #+#             */
/*   Updated: 2014/07/31 20:39:40 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = 0;
    b = 0;
    c = 0;
    while (a <= 9)
    {
        b = a + 1;
        while (b <= 9)
        {
            c = b + 1;
            while(c <= 9)
            {
                ft_putchar(48 + a);
                ft_putchar(48 + b);
                ft_putchar(48 + c);
                if (!(a == 7 && b == 8 && c == 9))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                c++;
            }
            b++;
        }
        a++;
    }
}
