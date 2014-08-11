/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/02 19:58:01 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/03 11:08:55 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strrev(char *str)
{
	int		count;
	int		len;
	char	text[2];
	char	*text_str;

	text[0] = ' ';
	text[1] = '\0';
	text_str = &text[0];
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	count = 0;
	while (count < len)
	{
		text_str[count] = str[len - count - 1];
		count++;
	}
	text_str[count] = '\0';
	return (text_str);
}
