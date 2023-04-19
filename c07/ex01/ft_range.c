/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:14:05 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/21 16:14:05 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*int_array;
	int	range;

	range = max - min;
	if (min >= max)
		return (NULL);
	int_array = (int *)malloc(sizeof(int) * range);
	if (int_array == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < range)
		{
			int_array[i] = min + i;
			i++;
		}
	}
	return (int_array);
}

/*int	main(void)
{	
	int	min;
	int	max;
	int	*array;
	int	i;
	int	range;

	min = 15;
	max = 25;
	range = max - min;
	array = ft_range(min, max);
	i = 0;
	while (i < range)
	{
		printf("%i\n", array[i]);
		i++;
	}
}*/
