/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:01 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/21 15:41:46 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = base * nb;
		power--;
	}
	return (nb);
}

/*int	main(int ac, char *av[])
{
	int	nb;
	int	power;

	nb = *av[1] - 48;
	power = *av[2] - 48;
	if (ac == 3)
		printf("%i\n", ft_iterative_power(nb, power));
	else
		printf("Invalid Input\n");
}*/
