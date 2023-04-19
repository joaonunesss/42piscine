/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:11:03 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/13 10:37:55 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>
//
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

//int	main(int argc, char *argv[])
//{
//	int	size;
//
//	size = *argv[2] - 48;
//	
//	char	dest[size];
//
//	printf("%i\n",ft_strlcpy(dest, argv[1], size));
//}
