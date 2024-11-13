/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:57:14 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/08 14:13:33 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

const void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*s;
	size_t		i;

	i = 0;
	s = (const char *)str;
	while (i < n)
	{
		if (s[i] == (char)c)
			return (s + i);
		i++;
	}
	return (NULL);
}
