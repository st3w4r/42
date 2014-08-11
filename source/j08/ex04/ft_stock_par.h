/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 12:53:13 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/11 23:58:30 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>
char	**ft_split_whitespaces(char *str);
char	*ft_strdup(char *src);
typedef	struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;
#endif
