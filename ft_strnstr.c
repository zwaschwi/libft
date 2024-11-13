/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:05:45 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/11 05:58:26 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	found_all(const char *str, const char *to_find)
{
	while (*to_find)
	{
		if (*to_find != *str)
			return (0);
		to_find++;
		str++;
	}
	return (1);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	if (!to_find || !str)
		return (NULL);
	if (!*to_find)
		return ((char *)str);
	while (*str && i < len)
	{
		if (*str == *to_find)
		{
			if (found_all((const char *)str, (const char *)to_find))
				return ((char *)str);
		}
		str++;
		i++;
	}
	return (NULL);
}
