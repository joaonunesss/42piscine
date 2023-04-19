/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:14:06 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/23 17:20:52 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char	**strs, int size)
{
	int	len;
	int	i;
	int	total;

	i = 1;
	total = 0;
	while (i < size)
	{
		len = 0;
		while (strs[i][len] != 0)
			len++;
		total += len;
		i++;
	}
	return (total + size - 2);
}

char	*ft_aux(int size, char **strs)
{
	int		len;
	char	*final;

	if (size == 0)
	{
		final = malloc(sizeof(*final));
		*final = 0;
		return (final);
	}
	len = ft_strlen(strs, size);
	final = malloc(sizeof(char) * len + 1);
	if (final == NULL)
		return (NULL);
	return (final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		q;
	char	*final;

	final = ft_aux(size, strs);
	i = 1;
	q = 0;
	while (i < size)
	{	
		j = 0;
		while (strs[i][j] != '\0')
			final[q++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			final[q++] = sep[j++];
		i++;
	}
	final[q] = '\0';
	return (final);
}

/*int	main(int ac, char *av[])
{
	char	*to_print;

	to_print = ft_strjoin(ac, av, "+");
	printf("String:%s\nSize:%i\n", to_print, ac);
	free (to_print);
}*/
