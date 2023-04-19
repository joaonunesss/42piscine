/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exame.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:03:26 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/23 11:33:56 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
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

void	ft_inter(char *s1, char *s2)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;	
	        while (s2[j] != '\0')
    	   	{
        	        if (s1[i] == s2[j])//need to check for doubles after this
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
	{
		ft_inter(av[1], av[2]);
	}
	else
		write(1, "\n", 1);
}
