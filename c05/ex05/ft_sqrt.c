/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:00:27 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/20 16:51:22 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_sqrt(int nb)
{	
	int	i;

	i = 1;
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*int	main(void)
{
	int	nb;

	nb = 25;

	printf("%i\n", ft_sqrt(nb));
}*/
