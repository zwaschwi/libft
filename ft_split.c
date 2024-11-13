/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:34:03 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/13 16:54:49 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	ft_space_needed(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

int	ft_count_words(char const *s, char c)
{
	int	i;

	i = 0;
	if (s[0] != c)
	{
		i++;
		s++;
	}
	while (*s)
	{
		if (*(s - 1) == c && *s != c)
			i++;
		while (*s != c)
			s++;
		while (*s == c)
			s++;
	}
	return (i);
}

char	**ft_produce_strs(char const *s, char c, char **arr, int arrlen)
{
	int	i;
	int	space;

	i = 0;
	while (i < arrlen)
	{
		while (*s == c)
			s++;
		space = ft_space_needed(s, c);
		arr[i] = ft_substr(s, 0, space);
		if (!arr[i])
		{
			while (i-- > 0)
				free (arr[i]);
			free (arr);
			return (NULL);
		}
		s += space;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		arrlen;
	char	**arr;

	arrlen = ft_count_words(s, c);
	arr = (char **)malloc((arrlen + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (!ft_produce_strs(s, c, arr, arrlen))
		return (NULL);
	return (arr);
}
