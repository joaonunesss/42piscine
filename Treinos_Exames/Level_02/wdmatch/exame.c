/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exame.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:10:16 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/23 16:29:10 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_doubles(char *s1, char x, int i)
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

void	ft_wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				if (ft_doubles(s1, s1[i], i) == 1)
				{
					write(1, &s1[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	if (ac == 3)
		ft_wdmatch(av[1], av[2]);
	write(1, "\n", 1);
}
