/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:44:40 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/12 14:24:08 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	ok;

	i = 0;
	ok = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
//		ft_str_is_printable(argv[1]);
//		printf("%i\n", ft_str_is_printable(argv[1]));
//	}
//	else if (argc == 1)
//	{
//		ft_str_is_printable(vazia);
//		printf("%i\n", ft_str_is_printable(vazia));
//	}
//	else
//		printf("Invalid Input\n");
//}
