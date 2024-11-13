/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:47:33 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/04 18:54:57 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int arg)
{
	if ((arg >= 65 && arg <= 90) || (arg >= 97 && arg <= 122))
		return (8);
	else if (arg >= '0' && arg <= '9')
		return (8);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int test_chars[] = {'A', 'z', '0', '9', '@', ' '};  // Characters to test
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++) {
        int ch = test_chars[i];
        printf("Testing character '%c' (ASCII %d):\n", ch, ch);
        printf("isalnum: %d\n", isalnum(ch));         // Standard function
        printf("ft_isalnum: %d\n\n", ft_isalnum(ch)); // Custom function
    }
    
    return (0);
}*/
