/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_INACABADO.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:45:56 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/06 12:08:50 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n);
void	printa(int str[], int cont_n);
int	main(void)
{
	ft_print_combn(2);
}

void	ft_print_combn(int n)
{
	if (0 < n && n < 10)
	{
		n = n - 1;
		int str[n];
		int cont_n;
		int i;
		int print;

		i = 0;
		cont_n = 0;
		
		while (cont_n <= n)
		{	
			str[cont_n] = 0;
			cont_n++;
			}
	
	}
}
