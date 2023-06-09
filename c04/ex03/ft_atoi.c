/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:57:19 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/19 14:38:52 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_atoi_aux(int i, char *str, int *atoi)
{	
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			*atoi = *atoi * 10 + str[i] - 48;
		else
			break ;
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	atoi;
	int	signal;

	i = 0;
	atoi = 0;
	signal = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = signal * -1;
		else
			signal *= 1;
		i++;
	}
	ft_atoi_aux(i, str, &atoi);
	return (atoi * signal);
}

/*int	main(int ac, char *av[])
{
	if (ac == 2)
		printf("%i\n", ft_atoi(av[1]));
	else
		printf("Invalid Input\n");
}*/
