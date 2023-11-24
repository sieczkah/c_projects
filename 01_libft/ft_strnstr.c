/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:11:50 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:11:51 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

/*
 * The strnstr() function locates the first occurrence of 
 * the null-terminated string s2 in the string s1, 
 * where not more than n characters are searched.
 * Characters that appear after a `\0' character are not searched.
 * 
 * Undefined behavior occurs when searching for a string longer than s1.
 * or when searching for a NULL pointer, or when n is greater than the length
 * of the string s1.
 * 
 * Parameters:
 * 		s1 - The string to be searched.
 * 		s2 - The substring to be searched for.
 * 		n - The maximum number of characters to be searched.
 * Return Value:
 * 		If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1,
 *  		NULL is returned; 
 * 		otherwise a pointer to the first character of the 
 * 			first occurrence of s2 is returned.
 */

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_len;
	size_t	i;

	s2_len = ft_strlen(s2);
	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		if (i + s2_len <= n)
		{
			if (ft_strncmp(&s1[i], s2, s2_len) == 0)
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
