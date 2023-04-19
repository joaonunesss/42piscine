/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:15:20 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/21 15:38:35 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
	}
	return (nb);
}

/*int	main(int ac, char *av[])
{
	int	nb;

	(void) ac;
	nb = *av[1] - 48;
	if (ac == 2)
		printf("%i\n", ft_iterative_factorial(nb));
	else
		printf("Invalid Input\n");

}*/
