/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:44:45 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/07 17:37:13 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_size_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	i;
	char	*d;

	i = 0;
	d = (char *)dest;
	while (i < count)
	{
		d[i] = c;
		i++;
	}
	return (dest);
}

/*
#include <memory.h>
#include <stdio.h>
int main( void )
{
	char buffer[] = "Thi";
	char buffer2[] = "Thi";
	int mon[] = {12, 43, 65 ,762,3435 ,5,443};
	int mon1[] = {12, 43, 65 ,762,3435 ,5,443};

//	t_point *main;
//	main->x = 340;
//	main->y = 16; 
	
//	printf( "Before original function: %s\n", buffer );
//	printf( "Before custom  function: %s\n", buffer2 );
	printf( "Before custom function:  %i\n", mon[1]);
	memset( buffer, '*', 4 );
	memset(mon1, '*', 4 );
	ft_memset( buffer2, '?', 4 );
	ft_memset( mon, '?', 4 );

   printf( "After original function:  %i\n",mon[1]);
   printf( "After original function:  %s\n", buffer );
	printf( "After custom function:  %s\n", buffer2 );
	printf( "After custom function:  %i\n", mon[1]);
}*/
