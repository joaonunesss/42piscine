/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <jmarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:47:30 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/02 10:52:11 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// void	ft_print_reverse_alphabet(void);

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }

void	ft_print_reverse_alphabet(void)
{
	char	x;

	x = 'z';
	while (x >= 'a')
	{
		write(1, &x, 1);
		x--;
	}
}
