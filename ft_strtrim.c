/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 06:42:37 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/11 16:31:15 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*returnstring;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	i = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	returnstring = (char *)malloc((end - start + 1) * sizeof(char));
	if (returnstring == NULL)
		return (NULL);
	while (i < (end - start))
	{
		returnstring[i] = s1[start + i];
		i++;
	}
	returnstring[i] = '\0';
	return (returnstring);
}
