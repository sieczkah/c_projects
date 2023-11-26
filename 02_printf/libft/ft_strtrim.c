/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:07:13 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/19 23:07:15 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

/*
 * ft_strtrim() allocates (with malloc(3)) and returns a copy of ’s1’ 
 * with the characters specified in ’set’ removed from the beginning 
 * and the end of the string.
 * Each string is interpreted as const char.
 * Passing a NULL pointer will result in an undefined behavior.
 * 
 * Parameters:
 * 		s1 - The string to be trimmed.
 * 		set - The reference set of characters to trim.
 * 
 * Return Value:
 * 		The trimmed string. NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end > 0 && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = malloc((end + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1, end + 1);
	return (trimmed);
}
