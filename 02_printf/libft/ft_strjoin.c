/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:53:00 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/19 22:53:01 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

/*
 * ft_strjoin() allocates (with malloc(3)) and returns a new string, 
 * which is the result of the concatenation of ’s1’ and ’s2’. 
 * Each string is interpreted as const char.
 * Passing a NULL pointer will result in an undefined behavior.
 * 
 * Parameters:
 * 		s1 - The prefix string.
 * 		s2 - The suffix string.
 * 
 * Return Value:
 * 		The new string. NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_join;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	str_join = malloc((total_len + 1) * sizeof(char));
	if (!str_join)
		return (NULL);
	ft_strlcpy(str_join, s1, total_len + 1);
	ft_strlcat(str_join, s2, total_len + 1);
	return (str_join);
}
