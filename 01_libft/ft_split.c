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

char			**ft_split(const char *s, char c);
static int		count_words(const char *s, char c);
static int		word_len(const char *s, char c);
char			**free_allocated_memory(char **result, int i);

/*
* ft_split - Splits a string into an array of strings.
* Splits a string into an array of strings using the delimiter character.
* The array of strings is terminated by a NULL pointer.
* Passing a NULL pointer as the string to split will result in an undefined
* behavior.
*
* Parameters:
* 		s - The string to split.
* 		c - The character delimiting the words.
* Returns:
* 		The array of strings resulting from the split,
* 		or NULL if the allocation fails.
*/
char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**result;

	i = 0;
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = word_len(s, c);
			result[i] = ft_substr(s, 0, len);
			if (!result[i])
				return (free_allocated_memory(result, i));
			s += len;
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

/* 
* count_words - Counts the number of words in a string.
* 
* Parameters:
* 		s - The string to count the words of.
* 		c - The character delimiting the words.
* Returns:
* 		The number of words in the string.
*/

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

/*
* word_len - Counts the length of a word.
* The length of a word is defined as the number of characters
* until the next occurence of the delimiter character or the
* end of the string.
*
* Parameters:
* 		s - The string to count the length of.
* 		c - The character delimiting the words.
* Returns:
* 		The length of the word.
*/

static int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

/*
* free_allocated_memory - Frees the allocated memory.
* Frees the allocated memory for a split array of strings and strings
* in case of an error.
* Returns char **NULL to comply with the return type of ft_split.
*
* Parameters:
* 		result - The result of the split.
* 		i - The index of the result.
* Returns:
* 		NULL.
*/

char	**free_allocated_memory(char **result, int i)
{
	while (i > 0)
	{
		i--;
		free(result[i]);
	}
	free(result);
	return (NULL);
}
