/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:08:21 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/21 13:02:09 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_count_words(char const *s, char c)
{
	int	i;

	i = 0;
	if (s[0] && s[0] != c)
		i++;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*(s - 1) == c && *s != c && *s && *(s - 1))
			i ++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

char	*ft_words(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc((i + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	word[i] = '\0';
	while (--i >= 0)
		word[i] = s[i];
	return (word);
}

char	**ft_free_all(char **arr, int i)
{
	while (i-- > 0)
		free(arr[i]);
	free (arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		size;
	char	**arr;

	i = 0;
	if (s == NULL)
		return (NULL);
	size = ft_count_words(s, c);
	arr = (char **)malloc((size + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			arr[i] = ft_words(s, c);
		if (!ft_words(s, c))
			return (ft_free_all(arr, i));
		i++;
		while (*s && *s != c)
			s++;
	}
	arr[i] = NULL;
	return (arr);
}
/*
#include <stdio.h>

void print_split(char **split_result)
{
    int i = 0;

    while (i < 6) // Iterate through the split result
    {
        printf("split_result[%d]: \"%s\"\n", i, split_result[i]);
        free(split_result[i]); // Free each allocated string
        i++;
    }
    free(split_result); // Free the array itself
}

int main(void)
{
    char **split_result;
    const char *test_str = "      split       this for   me  !";
    char delimiter = ' ';

    split_result = ft_split(test_str, delimiter);
    if (!split_result)
    {
        printf("Error: ft_split returned NULL.\n");
        return (1);
    }

    print_split(split_result);
    return (0);
}*/
