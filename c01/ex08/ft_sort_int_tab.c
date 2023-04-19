/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:48:10 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/09 12:52:28 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	big;
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{	
		j = 0;
		while (j < size - 1 - i)
		{	
			if (tab[j] > tab[j + 1])
			{
				big = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = big;
			}
			j++;
		}
		i++;
	}		
}

//int	main(void)
//{
//	int	num[8] = {1, 200, 5, 3, 12, 100, 87, 99};
//
//	ft_sort_int_tab(&num[0], 8);
//}
//	for (int j = 0; j < size; j++)
//		printf("%i\n", tab[j]);
