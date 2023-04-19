/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <jmarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:48:41 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/05 11:50:21 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//
//void	ft_putchar(char c);
//
//int	main(void)
//{	
//	char	c;
//
//	c = 'c';
//	ft_putchar(c);
//}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
