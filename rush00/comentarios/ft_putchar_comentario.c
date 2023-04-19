/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:16:49 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/04 11:27:24 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int col, char inicio, char meio, char fim)
{
	int	conta_colunas;

	conta_colunas = 1;
	while (conta_colunas <= col)
	{
		if (conta_colunas == 1)
			write(1, &inicio, 1);//se estiver na primeira coluna da linha
		else if (conta_colunas == col)
			write(1, &fim, 1); //se estiver na ultima coluna da linha
		else
			write(1, &meio, 1);//se estiver nas colunas do meio
		conta_colunas++;
	}
	write(1, "\n", 1); //no final das colunas muda de linha
}
