/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <jmarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:01:30 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/23 12:44:16 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_printa(int x, int y, int a, int b)
{
	if (x != y && x < y)
	{			
		a = x / 10 + 48;
		b = x % 10 + 48;
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		a = y / 10 + 48;
		b = y % 10 + 48;
		write(1, &a, 1);
		write(1, &b, 1);
		if (x != 98 || y != 99)
			write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;
	int	a;
	int	b;

	x = 0;
	y = 1;
	a = '0';
	b = '0';
	while (x <= 98)
	{
		while (y <= 99)
		{	
			ft_printa(x, y, a, b);
			y++;
		}
	y = 0;
	x++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
