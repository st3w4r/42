/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 21:21:31 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 23:20:48 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_atoi(char *str)
{
	int i;
	int len;
	int nb;
	int mult;
	int neg;

	i = 0;
	len = 0;
	nb = 0;
	mult = 1;
	neg = 0;
	while (str[len] != '\0')
		len++;
	i = len - 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb += (str[i] - 48) * mult;
		if (str[i] == '-')
			neg = 1;
		mult *= 10;
		len--;
		i--;
	}
	return (neg ? -nb : nb);
}
