/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:15:41 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/11 15:42:15 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	ok;

	i = 0;
	ok = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			ok++;
		i++;
	}
	if (ok == i)
		return (1);
	else
		return (0);
	return (1);
}

//int	main(int argc, char **argv)
//{
//	char	vazia[0];
//
//	if (argc == 2)
//	{
//		ft_str_is_numeric(argv[1]);
//		printf("%i\n", ft_str_is_numeric(argv[1]));
//	}
//	else if (argc == 1)
//	{
//		ft_str_is_numeric(vazia);
//		printf("%i\n", ft_str_is_numeric(vazia));
//	}
//	else
//		printf("Invalid Input\n");
//}
