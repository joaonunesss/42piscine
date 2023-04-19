/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <jmarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:35:21 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/13 17:43:42 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>
// #include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(int argc, char *argv[])
// {	
// 	(void) argc;
// 	char	dest[5];
// 	printf("%s\n", ft_strcpy(argv[1], dest));
// }
