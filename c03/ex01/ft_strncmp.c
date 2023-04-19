/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:47:29 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/16 12:35:56 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(int ac, char *av[])
{
	unsigned int	n;

	n = *av[3] - 48;//converter caracter em numero int
	if (ac == 4)
		printf("Return: %i\n", ft_strncmp(av[1], av[2], n));
	else
		printf("Invalid Input\n");
}*/
