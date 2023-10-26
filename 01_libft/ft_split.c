/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:07:22 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/19 23:07:24 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(char const *s, char c);
static	size_t	get_word_count(char const *s, char c);
static	char		**ft_copy_words(char **split_arr, char const *s, char c);
static char		**free_array_strings(char **split_arr, size_t i);

char	**ft_split(const char *s, char c)
{
	size_t	words_count;
	char	**split_arr;

	words_count = get_word_count(s, c);
	split_arr = malloc((words_count + 1) * sizeof(char *));
	if (!split_arr)
		return (NULL);
	ft_copy_words(split_arr, s, c);
	split_arr[words_count] = NULL;
	return (split_arr);
}

static	char	**ft_copy_words(char **split_arr, char const *s, char c)
{
	size_t	i;
	size_t	word_len;
	char	*word_start;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			word_start = (char *)s;
			while (*s != c && *s)
				s++;
			word_len = s - word_start;
			split_arr[i] = malloc((word_len + 1) * sizeof(char));
			if (!split_arr[i])
				return (free_array_strings(split_arr, i));
			ft_strlcpy(split_arr[i], word_start, word_len + 1);
			i++;
		}
	}
	return (split_arr);
}

static char	**free_array_strings(char **split_arr, size_t i)
{
	while (i--)
		free(split_arr[i]);
	free(split_arr);
	return (NULL);
}

static	size_t	get_word_count(char const *s, char c)
{
	size_t	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			word_count++;
			while (*s != c && *s)
				s++;
		}
	}
	return (word_count);
}
