/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:47:02 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/19 14:38:05 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_printa(long longnb)
{
	int	x;

	if (longnb >= 0 && longnb < 10)
	{
		longnb = longnb + 48;
		write(1, &longnb, 1);
	}
	else
	{
		ft_printa(longnb / 10);
		x = longnb % 10 + 48;
		write(1, &x, 1);
	}
}

void	ft_putnbr(int nb)
{
	long	longnb;

	longnb = nb;
	if (longnb < 0)
	{	
		longnb = -longnb;
		write(1, "-", 1);
		ft_printa(longnb);
	}
	else
		ft_printa(longnb);
}
/*int	main(void)
{
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
}*/
