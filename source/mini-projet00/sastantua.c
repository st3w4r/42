/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/03 14:19:47 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/03 21:38:02 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ligne1(int size);
int		ft_putchar(char c);
void	size_space(int size, int space);
void	ligne_repeat_etage(int etage);
void	create_etage(int nb_ligne, int *nb_space_start, int *nb_etoile_start);

void	sastantua(int size)
{
	ligne1(size);
}

void	ligne1(int size)
{
	int j;
	int start_ligne;
	int start_etoile;
	int start_space;

	j = 0;
	start_etoile = 1;
	start_ligne = 3;
	start_space = (size * (size + 1) + 2 * size);
	while (j < size)
	{
		start_space = start_space - 2;
		create_etage(start_ligne, &start_space, &start_etoile);
		start_ligne++;
		start_etoile = start_etoile + 4;
		j++;
	}
}

void	ligne_repeat_etage(int etage)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 3 + etage - 1;
	size = 1;
	while (i < 3 + etage)
	{
		size_space(size, j);
		size += 2;
		i++;
		j--;
	}
}

void	create_etage(int nb_ligne, int *nb_space_start, int *nb_etoile_start)
{
	int i;

	i = 0;
	while (i < nb_ligne)
	{
		size_space(*nb_etoile_start, *nb_space_start);
		*nb_space_start = *nb_space_start - 1;
		*nb_etoile_start += 2;
		i++;
	}
}

void	size_space(int size, int space)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < space)
	{
		ft_putchar(' ');
		j++;
	}
	ft_putchar('/');
	while (i < size)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}
