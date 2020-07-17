/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:08:31 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/17 09:25:54 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char  *ft_strdup( char *src)
{
	int y;
	char *dest;
	int x;

	x = 0;
	y = 0;

		while (src[y] !='\0')
			y++;
	dest = ( char *) malloc(sizeof(*dest) * (y + 1));
	while (x < y)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}

int main(void) 
{
	printf("%s",ft_strdup("mumothom"));
	return 0;
}



