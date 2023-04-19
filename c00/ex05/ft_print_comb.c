/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <jmarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:44:50 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/07 09:17:05 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_printa(int x, int y, int z)
{
	if (x != y && x != z && y != z)
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, &z, 1);
		if (x != '7')
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_printa (x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//}
