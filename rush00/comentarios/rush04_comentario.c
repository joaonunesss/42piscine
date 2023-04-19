/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:23:13 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/04 11:17:44 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int col, char inicio, char meio, char fim);

void	 rush(int x, int y)
{
	int conta_linhas;	//int x numero de colunas && int y numero de linhas

	conta_linhas = 1;
	if(x > 0 && y > 0)	//se x=0 && y=0 nao existe nada para printar
	{
		while(conta_linhas <= y)
		{
			if(conta_linhas == 1)
				ft_putchar(x, 'A', 'B', 'C'); //ordem de caracteres da primeira linha ABC
			else if(conta_linhas == y)
				ft_putchar(x, 'C', 'B', 'A'); //ordem de caracteres da ultima linha CBA
			else
				ft_putchar(x, 'B', ' ', 'B'); //ordem de caracteres das linhas do meio B B
			conta_linhas++;
		}
	}	
}
