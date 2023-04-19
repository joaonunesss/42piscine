/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:11:15 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/11 15:48:17 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

//int   main(int argc, char **argv)
//{
//      if (argc == 2)
//      {
//              ft_strlowcase(argv[1]);
//              printf("%s\n", ft_strlowcase(argv[1]));
//      }
//      else
//              printf("Invalid Input\n");
//}
