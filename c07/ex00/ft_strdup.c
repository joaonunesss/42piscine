/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:19:35 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/22 11:30:38 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (src[i] != '\0')
		{
			ptr[i] = src[i];
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(int ac, char *av[])
{
	printf("ORIGINAL:%s\n", strdup(av[1]));

	if (ac == 2)
		printf("%s\n", ft_strdup(av[1]));
	else
		printf("Invalid Input\n");
}*/
