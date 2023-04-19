/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:43:13 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/14 11:50:50 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/*int	main(int ac, char *av[])
{
	if (ac == 3)
		printf("%s\n", ft_strcat(av[1], av[2])); 
	// String 1 tem que ser maior que String ou o resultado e imprevisivel
	else
		printf("Invalid Input\n");
}*/
