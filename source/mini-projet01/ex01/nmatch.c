/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 17:28:35 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/10 17:31:41 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int nmatch(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2 && *s1 != '*')
		return (nmatch(s1 + 1, s2 + 1));
	else if (*s1 == '*' && *s2 == '*')
		return (nmatch(s1 + 1, s2));
	else if (*s2 == '*' && !*s1)
		return (nmatch(s1, s2 + 1));
	else if (*s2 == '*' && *s2 && *s1)
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	else
		return (0);
}
