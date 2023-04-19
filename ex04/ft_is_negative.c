/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <jmarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:30:58 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/02 11:43:39 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// void	ft_is_negative(int n);

// int	main(void)
// {
// 	int	n;

// 	n = -3;
// 	ft_is_negative(n);
// }

void	ft_is_negative(int n)
{
	char	p;
	char	k;

	p = 'P';
	k = 'N';
	if (n < 0)
		write(1, &k, 1);
	if (n >= 0)
		write(1, &p, 1);
}
