/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:10:21 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/21 15:40:12 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(int ac, char *av[])
{
	int	nb;

	nb = *av[1] - 48;
	if (ac == 2)
		printf("%i\n", ft_recursive_factorial(nb));
	else
		printf("Invalid Input\n");
}*/
