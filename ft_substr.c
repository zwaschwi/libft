/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 06:07:19 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/20 17:38:28 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (i < len && *(s + start + i))
	{
		substr[i] = *(s + start + i);
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
