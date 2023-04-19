/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <jmarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:14:56 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/13 17:10:52 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_lowcase (str);
	i = 0;
	while (str[i] != '\0')
	{	
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			str[i] = str[i];
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			str[i] = str[i];
		else if (str[i - 1] >= '0' && str[i - 1] <= '9')
			str[i] = str[i];
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

//int	main(int argc, char **argv)
//{
//	if (argc == 2)
//	{
//		ft_strcapitalize(argv[1]);
//		printf("%s\n", ft_strcapitalize(argv[1]));
//	}
//	else
//		printf("Invalid Input\n");
//}
