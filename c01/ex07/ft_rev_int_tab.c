/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:31:00 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/09 18:19:18 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	number;
	int	i;
	int	k;

	i = 0;
	k = size;
	while (i < k / 2)
	{
		number = tab[i];
		tab[i] = tab[size -1];
		tab[size - 1] = number;
		i++;
		size--;
	}
}

int	main(void)
{
	int	num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_rev_int_tab(num, 10);
}
