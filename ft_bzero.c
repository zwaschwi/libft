/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:30:45 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/06 16:37:12 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, int n)
{
	int		i;
	char	*src;

	i = 0;
	src = (char *)s;
	while (i < n)
	{
		src[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
#include <strings.h>  // For standard bzero
#include <stddef.h>

int main(void)
{
    char buffer1[10] = "Hello";
    char buffer2[10] = "Hello";

    // Use standard bzero
    bzero(buffer1, 5);
    printf("Standard bzero result: ");
    for (int i = 0; i < 10; i++) printf("%d ", buffer1[i]);
    printf("\n");

    // Use custom ft_bzero
    ft_bzero(buffer2, 5);
    printf("Custom ft_bzero result: ");
    for (int i = 0; i < 10; i++) printf("%d ", buffer2[i]);
    printf("\n");

    return 0;
}*/
