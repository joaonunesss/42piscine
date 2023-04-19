/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:56:06 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/11 15:39:33 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

//int	main(int argc, char **argv)
//{
//	if (argc == 2)
//	{
//		ft_strupcase(argv[1]);
//		printf("%s\n", ft_strupcase(argv[1]));
//	}
//	else
//		printf("Invalid Input\n");
//}
