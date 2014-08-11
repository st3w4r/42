/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvial <fvial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 19:43:00 by fvial             #+#    #+#             */
/*   Updated: 2014/08/05 11:40:20 by fvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	i;
	int nbr;

	i = 1;
	nbr = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		nb = nb * nbr;
		i++;
	}
	return (nb);
}
