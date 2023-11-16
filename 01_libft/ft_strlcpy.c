/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:09:55 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/08 18:16:27 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);

/*
 * ft_strlcpy - Copies up to dest_size - 1 characters from the NULL-terminated
 * string src to dest, NULL-terminating the result.
 * The source and destination strings should not overlap, as the behavior is
 * undefined.
 * Passing a NULL pointer to dest or src will result in undefined behavior.
 *
 * Parameters:
 *		dest - A pointer to the destination string.
 *		src - A pointer to the source string.
 *		dest_size - The size of the destination buffer.
 *
 * Return Value:
 * 		Returns the total length of the string tried to create.
 * 		If the return value is >= dest_size, the output string has been
 * 		truncated.
 */

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dest_size == 0)
		return (len);
	i = 0;
	while (src[i] && (i < dest_size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (len);
}
