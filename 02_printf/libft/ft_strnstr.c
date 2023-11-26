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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*
 * The strnstr() function locates the first occurrence of 
 * the null-terminated string needle in the string haystack, 
 * where not more than len characters are searched.
 * Characters that appear after a `\0' character are not searched.
 * 
 * Undefined behavior occurs when searching for a string longer than haystack.
 * or when searching for a NULL pointer, or when len is greater than the length
 * of the string haystack.
 * 
 * Parameters:
 * 		haystack - The string to be searched.
 * 		needle - The substring to be searched for.
 * 		len - The maximum number of characters to be searched.
 * Return Value:
 * 		If needle is an empty string, haystack is returned; if needle occurs 
 * 		nowhere in haystack, NULL is returned; 
 * 		otherwise a pointer to the first character of the 
 * 			first occurrence of needle is returned.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	s2_len;
	size_t	i;

	s2_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (i + s2_len <= len)
		{
			if (ft_strncmp(&haystack[i], needle, s2_len) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
