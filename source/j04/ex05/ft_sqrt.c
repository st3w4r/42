/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 19:02:43 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 20:47:48 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int racine;
	int sqrt;

	racine = 1;
	sqrt = 0;
	while (racine <= nb / 2)
	{
		sqrt = racine * racine;
		if (sqrt == nb)
		{
			return (racine);
		}
		racine = racine + 1;
	}
	return (0);
}
