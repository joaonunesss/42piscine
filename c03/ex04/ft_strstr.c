/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:21:14 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/15 19:12:15 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (s2[len] != '\0')
		len++;
	while (s1[i] == s2[i] && i < len)
		i++;
	if (i == len)
		return (0);
	else
		return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] == to_find[j])
			{
				check = ft_strcmp(&str[i], to_find);
				if (check == 0)
					return (&str[i]);
			}
			i++;
		}
	}
	return (NULL);
}

/*int	main(int ac, char *av[])
{
	if (ac == 3)
		printf("%s\n", ft_strstr(av[1], av[2]));
	else
		printf("Invalid Input\n");
}*/
