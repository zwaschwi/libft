/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:34:14 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/11 05:57:09 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(n * size);
	if (str == NULL)
		return (NULL);
	while (i < n * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
