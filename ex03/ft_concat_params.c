/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:09:00 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/17 10:26:22 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		lenght(int argc, char **argv)
{
	int x;
	int y;
	int size;

	x = 1;
	size = 0 ;
	while (x < argc )
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			size++;
			y++;
		}
		size++;
		x++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int x;
	int y;
	int z;
	char *tab;

	x = 1;
	z = 0;

	tab = (char *)malloc(sizeof(tab) * lenght(argc, argv));
	while ( x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			tab[z] = argv[x][y];
			z++;
			x++;
		}
		tab[z] = '\n';
		z++;
		x++;
	}
	return (tab);
}

int main()
{ 
	char* arr[5] = {"NO", "YES", "ARG2", "ARG3", NULL};

	ft_concat_params(4, arr);
	printf("%s", ft_concat_params(4,arr));

	return (0);
}



