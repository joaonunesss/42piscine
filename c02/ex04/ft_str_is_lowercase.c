/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:36:36 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/11 15:41:32 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	ok;

	i = 0;
	ok = 0;
	while (str[i] != '\0')
	{
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

//int	main(int argc, char **argv)
//{
//	char	vazia[0];
//
//	if (argc == 2)
//	{
//		ft_str_is_lowercase(argv[1]);
//		printf("%i\n", ft_str_is_lowercase(argv[1]));
//	}
//	else if (argc == 1)
//	{
//		ft_str_is_lowercase(vazia);
//		printf("%i\n", ft_str_is_lowercase(vazia));
//	}
//	else
//		printf("Invalid Input\n");
//}
