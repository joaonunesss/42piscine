/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:17:49 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/20 11:52:44 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<unistd.h>

int	ft_strcmp(char *av1, char *av2)
{
	int	i;

	i = 0;
	while ((av1[i] != '\0' || av2[i] != '\0') && av1[i] == av2[i])
		i++;
	return (av1[i] - av2[i]);
}

void	ft_swap(char **av1, char **av2)
{
	char	*temp;

	temp = *av1;
	*av1 = *av2;
	*av2 = temp;
}

void	ft_print(char **av, int ac)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac - 1)
	{	
		j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = 1;
		while (j < ac - i - 1)
		{	
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				ft_swap(&av[j], &av[j + 1]);
			j++;
		}
		i++;
	}
	ft_print(&av[1], ac);
}
