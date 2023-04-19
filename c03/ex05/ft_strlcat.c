/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:13:59 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/16 12:38:48 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	int				len1;
	int				len2;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	len1 = dest_len;
	len2 = src_len;
	while (i < src_len && i < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[i] = '\0';
	return (len1 + len2);
}

/*int	main(int ac, char *av[])
{
	unsigned int	size;

	size = *av[3] - 48;
	if (ac == 4)
		printf("%i\n", ft_strlcat(av[1], av[2], size));
	else
		printf("Invalid Input\n");
}*/
