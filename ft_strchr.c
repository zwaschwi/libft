/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:21:51 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/21 12:48:06 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char *p = ft_strchr(str, 'o');
    if (p != NULL) {
        printf("Found 'o' at position %ld\n", (long)(p - str));
    } else {
        printf("Character 'o' not found\n");
    }
    return 0;
}*/
