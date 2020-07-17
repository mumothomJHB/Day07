/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:47:52 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/17 10:00:40 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i = 0;

	*range = (int *)malloc(sizeof(**range) * (max - min + 1));
	if( min >= max)
	{
		*range = NULL;
		return (0);
	}

	while (i < (max - min))
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}

int main( void)
{
	int *res = NULL;
	int i;
	int size;

	size = ft_ultimate_range(&res, 5, 10);
	printf("is_null? %d\n", res == NULL);
	for (i = 0; i < 5; i++)
	printf("%d,", res[i]);
	 printf("\n");

	 return (0);
}
