/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 06:24:34 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/11 06:40:39 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rstr;
	int		size_s1;
	int		size_s2;
	char	*start;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	rstr = (char *)malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (rstr == NULL)
		return (NULL);
	start = rstr;
	while (*s1)
	{
		*rstr = *s1;
		s1++;
		rstr++;
	}
	while (*s2)
	{
		*rstr = *s2;
		s2++;
		rstr++;
	}
	*rstr = '\0';
	return (start);
}
