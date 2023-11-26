/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:16:08 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:16:09 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1);

/*
 * ft_strdup - Returns a pointer to a new string which is a duplicate of the
 * string s1. Memory for the new string is obtained with malloc(3), and can be
 * freed with free(3).
 * If insufficient memory is available, NULL is returned. 
 * If s1 is NULL, NULL is returned.
 *
 * Parameters:
 * 		s1 - The string to duplicate.
 *
 * Return Value:
 * 		Returns a pointer to the duplicated string. NULL if insufficient memory
 * 		was available.
 */
char	*ft_strdup(const char *s1)
{
	char	*s_dup;
	size_t	size;

	size = ft_strlen(s1) + 1;
	s_dup = malloc(size * sizeof(char));
	if (!s_dup)
		return (NULL);
	ft_memcpy(s_dup, s1, size);
	return (s_dup);
}
