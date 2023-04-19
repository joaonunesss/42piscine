/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:46:52 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/08 19:31:26 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

//int	main(void)
//{
//	char	str[3] = {'A', 'B', 'C'};
//	int	strlen;
//
//	strlen = ft_strlen(&str[0]);
//	printf("O numero de caracteres 'e:%i\n", strlen);
//}
