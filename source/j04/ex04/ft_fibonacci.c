/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 18:33:24 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 18:45:19 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_fibonacci(int index)
{
	if (index < 1)
		return (0);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
