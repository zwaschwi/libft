/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:09:06 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/20 17:17:57 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < num)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
