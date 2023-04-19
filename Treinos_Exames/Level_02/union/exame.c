/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exame.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:49:05 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/23 12:25:01 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int     ft_doubles2(char *s1, char x)
{
        int     k;

        k = 0;
        while (s1[k] != '\0')
        {
                if (s1[k] == x)
                        return (0);
                k++;
        }
        return (1);
}


int	ft_doubles1(char *s1, char x, int i)
{
	int	k;

	k = 0;
	while (k < i)
	{
		if (s1[k] == x)
			return (0);
		k++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_doubles1(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		if (ft_doubles2(s1, s2[j]) == 1)
		{
			if (ft_doubles1(s2, s2[j], j) == 1)
                        write(1, &s2[j], 1);
		}
		j++;
	}
}

int	main(int ac, char *av[])
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
}
