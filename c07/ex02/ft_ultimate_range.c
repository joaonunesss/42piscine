/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:15:44 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/21 20:03:36 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	if (min >= max)
		return (0);
	temp = malloc(sizeof(int) * (max - min));
	if (temp == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		temp[i] = min + i;
		i++;
	}
	*range = temp;
	return (i);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	**range;
	int	*ptr;

	range = &ptr;
	min = 10;
	max = 25;
	printf("%i\n", ft_ultimate_range(range, min, max));
}*/
