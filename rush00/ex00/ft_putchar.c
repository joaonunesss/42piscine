/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:16:49 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/04 16:52:16 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int col, char beggining, char middle, char end)
{
	int	count_columns;

	count_columns = 1;
	while (count_columns <= col)
	{
		if (count_columns == 1)
			write(1, &beggining, 1);
		else if (count_columns == col)
			write(1, &end, 1);
		else
			write(1, &middle, 1);
		count_columns++;
	}
	write(1, "\n", 1);
}
