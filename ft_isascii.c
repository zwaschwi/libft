/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:58:37 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/07 17:36:52 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int test_chars[] = {65, 127, 128, -1, '3', 'z'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++) {
        int ch = test_chars[i];
        printf("Testing character (ASCII %d):\n", ch);
        printf("isascii: %d\n", isascii(ch));
        printf("ft_isascii: %d\n\n", ft_isascii(ch));
    }

    return (0);
}*/
