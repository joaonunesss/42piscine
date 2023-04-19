/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:51:44 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/14 12:08:23 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0' && i + 1 <= nb)
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
	unsigned int nb;

	nb = *av[3] - 48;
	if (ac == 4)
		printf("%s\n", ft_strncat(av[1], av[2], nb)); 
	// String 1 tem que ser maior que String ou o resultado e imprevisivel
	// copia ate n bytes
	else
		printf("Invalid Input\n");
}*/
