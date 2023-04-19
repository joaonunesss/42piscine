/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <jmarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:36:26 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/14 15:08:12 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_delete(int decimal)
{
	if (decimal == 127)
		write(1, "//7f", 3);
}

void	conv_hexa(int decimal)
{
	char	hexa[16];
	int		j;

	j = 1;
	hexa[0] = '0';
	while (j < 16)
	{
		if (j == 10)
			hexa[j] = 'a';
		else
			hexa[j] = hexa[j - 1] + 1;
		j++;
	}
	if (decimal >= 0 && decimal <= 15)
	{
		write (1, "\\0", 2);
		write (1, &hexa[decimal], 1);
	}
	if (decimal >= 16 && decimal <= 31)
	{
		write (1, "\\1", 2);
		write (1, &hexa[decimal - 16], 1);
	}
	ft_delete(decimal);
}

void	ft_putstr_non_printable(char *str)
{	
	int	i;
	int	decimal;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32)
			write(1, &str[i], 1);
		else
		{
			decimal = str[i];
			conv_hexa(decimal);
		}
		i++;
	}
}

//int	main(void)
//{
//	char	test [] = "Ola\nesta b\tem?";
//
//	ft_putstr_non_printable(test);
//	printf("\n");
//}
