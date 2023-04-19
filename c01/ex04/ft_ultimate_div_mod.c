/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:54:28 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/08 10:49:05 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a2;
	int	b2;

	a2 = *a;
	b2 = *b;
	*a = a2 / b2;
	*b = a2 % b2;
}

//int	main(void)
//{
//	int x;
//	int y;
//
//	x = 7;
//	y = 2;
//	ft_ultimate_div_mod(&x, &y);
//	printf("Div: %i\nMod: %i\n", x, y);
//}
