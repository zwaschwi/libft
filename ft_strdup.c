/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 05:59:19 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/11 06:06:49 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str);

const char	*ft_strcpy(char *dest, const char *src)
{
	const char	*start_of_string;

	start_of_string = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start_of_string);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		l;

	l = ft_strlen(src);
	dest = (char *)malloc((l + 1) * sizeof(*dest));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
