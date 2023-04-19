/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:35:59 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/10 11:05:08 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	ok;

	i = 0;
	ok = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 65 && str[i] <= 90)
			ok++;
		if (str[i] >= 97 && str[i] <= 122)
			ok++;
		i++;
	}
	if (ok == i)
		return (1);
	else
		return (0);
	return (1);
}

//int	main(int argc, char *argv[])
//{	
//	char	vazia[0];// STRING VAZIA
//
//	if (argc == 2)	//QUANDO O USER COLOCA UMA STRING
//	{	
//		ft_str_is_alpha(argv[1]);
//		//PARA IMPRIMIR
//		printf("%i\n", ft_str_is_alpha(argv[1]));
//	}
//	if (argc == 1)//QUANDO O USER NAO COLOCA STRING(STRING VAZIA)
//	{
//		ft_str_is_alpha(vazia);
//		//PARA IMPRIMIR
//		printf("%i\n", ft_str_is_alpha(vazia));
//	}
//}
