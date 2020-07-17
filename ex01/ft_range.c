/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:31:07 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/17 09:46:30 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range( int min , int max)
{
	int *str;
	int i;
	int len;

	if ( min >= max)
	{
		return (NULL);
	}

	i = 0;
	len = max - min;
	str = (int *)malloc(sizeof(min) * len);
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}

int main(void)
{
	int* res;
	int i;

	res = ft_range(5, 10);

	for (i= 0; i < 5; i++)
	printf("%d,", res[i]);
	printf("\n");

	res = ft_range(-20, -15);
	for (i = 0; i < 1; i++)
	printf("%d,", res[i]);
	printf("\n");

	res = ft_range(10, 5);
	printf("%x\n", (unsigned int)res);
}



