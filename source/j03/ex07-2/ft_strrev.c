/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/02 19:58:01 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/04 16:03:25 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrev(char *str)
{
	int		count;
	int		len;
	int		ascii;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	count = 0;
	while (count < len / 2)
	{
		ascii = str[count];
		str[count] = str[len - count - 1];
		str[len - count - 1] = ascii;
		count++;
	}
	return (str);
}
