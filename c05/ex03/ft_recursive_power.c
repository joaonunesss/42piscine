/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:24:10 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/21 18:59:18 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = base * ft_recursive_power(nb, power - 1);
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
		printf("%i\n", ft_recursive_power(nb, power));
	else
		printf("Invalid Input\n");
}*/
