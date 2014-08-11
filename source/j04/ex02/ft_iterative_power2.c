/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 13:38:02 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 17:33:41 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int total;

	if (power < 0)
		return (0);
	i = 0;
	total = 1;
	while (i < power)
	{
		total *= nb;
		i++;
	}
	return (total);
}
