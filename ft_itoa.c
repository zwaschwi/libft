/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:32:16 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/11 17:55:48 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_count_digits(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		i += 1;
	}
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*write_positives(char *integer, int n, int i)
{
	while (n > 0)
	{
		integer[--i] = n % 10 + '0';
		n = n / 10;
	}
	return (integer);
}

char	*ft_itoa(int n)
{
	char	*integer;
	int		i;

	i = ft_count_digits(n);
	integer = (char *)malloc((i + 1) * sizeof(char));
	if (integer == NULL)
		return (NULL);
	else if (n == -2147483648)
	{
		integer[--i] = '8';
		n = n / 10;
	}
	integer[i] = '\0';
	if (n < 0)
	{
		integer[0] = '-';
		n = -n;
	}
	if (n == 0)
		integer[0] = '0';
	write_positives(integer, n, i);
	return (integer);
}
/*
int main()
{
    int test_values[] = {0, -2147483648, -123, 123, 42, -9, 2147483647};
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);
    
    for (int i = 0; i < num_tests; i++)
    {
        int n = test_values[i];
        char *result = ft_itoa(n);
        
        if (result != NULL)
        {
            printf("ft_itoa(%d) = %s\n", n, result);
            free(result); // Free allocated memory
        }
        else
        {
            printf("ft_itoa(%d) = NULL (allocation failed)\n", n);
        }
    }
    
    return 0;
}*/
