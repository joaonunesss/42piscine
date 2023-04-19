/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:23:13 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/04 17:03:48 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int col, char beggining, char middle, char end);

void	rush(int x, int y)
{
	int	count_lines;

	count_lines = 1;
	if (x > 0 && y > 0)
	{
		while (count_lines <= y)
		{
			if (count_lines == 1)
				ft_putchar(x, 'A', 'B', 'C');
			else if (count_lines == y)
				ft_putchar(x, 'C', 'B', 'A');
			else
				ft_putchar(x, 'B', ' ', 'B');
			count_lines++;
		}
	}	
}
