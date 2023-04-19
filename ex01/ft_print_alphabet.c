/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <jmarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:39:00 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/02 10:45:59 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// void	ft_print_alphabet(void);

// int	main(void)
// {
// 	ft_print_alphabet();
// }

void	ft_print_alphabet(void)
{
	char	x;

	x = 'a';
	while (x <= 'z')
	{
		write(1, &x, 1);
		x++;
	}
}
