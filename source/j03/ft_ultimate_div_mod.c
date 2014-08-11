/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/01 16:02:45 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/01 22:53:16 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp_a;
	int tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = tmp_a / tmp_b;
	*b = tmp_a % tmp_b;
}
