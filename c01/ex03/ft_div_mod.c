/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:25:03 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/08 19:29:34 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main()
//{
//	int a;
//	int b;
//	int div;
//	int mod;
//
//	a = 7;
//	b = 2;
//	ft_div_mod(a, b, &div, &mod);
//	printf("div: %i \nmod: %i\n", div, mod);
//}
