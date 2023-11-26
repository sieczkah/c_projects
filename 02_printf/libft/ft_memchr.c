/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:11:21 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:11:22 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

/*
 * ft_memchr - locate character in byte string
 * Passes in a memory area, a character to search for, 
 * and a count of bytes to search
 * Passing a NULL pointer will result in an undefined behavior
 * Passing a count of zero will return NULL.
 * Extending the search beyond the number of bytes in the memory area will 
 * result in an undefined behavior.
 * 
 * Parameters:
 * 		s - A pointer to the memory area to be searched.
 * 		c - The character to be located.
 * 		n - The number of bytes to be searched.
 * Return Value:
 * 		Returns a pointer to the matching byte or NULL if the character does not
 * 		occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		char_c;

	ptr = (const unsigned char *)s;
	char_c = (unsigned char)c;
	while (n--)
	{
		if (*ptr == char_c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
