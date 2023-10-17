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
static void		replace_delimiters(char *s, char c);
static void		assign_pointers(char **split, char *copy, char c);
static size_t	count_words(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**split;
	char	*copy;

	words = count_words(s, c);
	split = malloc((words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	copy = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!copy)
	{
		free(split);
		return (NULL);
	}
	ft_strlcpy(copy, s, ft_strlen(s) + 1);
	assign_pointers(split, copy, c);
	replace_delimiters(copy, c);
	return (split);
}

static size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static void	replace_delimiters(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			s[i] = '\0';
		i++;
	}
}

static void	assign_pointers(char **split, char *copy, char c)
{
	size_t	i;
	size_t	word_index;

	i = 0;
	word_index = 0;
	while (copy[i])
	{
		if (i == 0 || (copy[i - 1] == c && copy[i] != c))
		{
			split[word_index] = &copy[i];
			word_index++;
		}
		i++;
	}
	split[word_index] = NULL;
}
