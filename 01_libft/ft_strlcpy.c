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

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/*
 * ft_strlcpy - Copies up to size - 1 characters from the NULL-terminated
 * string src to dst, NULL-terminating the result.
 * The source and destination strings should not overlap, as the behavior is
 * undefined.
 * Passing a NULL pointer to dst or src will result in undefined behavior.
 * If size is 0, the string is not copied and the function returns the total
 * length of the string it tried to create.
 *
 * Parameters:
 *		dst - A pointer to the destination string.
 *		src - A pointer to the source string.
 *		size - The size of the destination buffer.
 *
 * Return Value:
 * 		Returns the total length of the string tried to create.
 * 		If the return value is >= size, the output string has been
 * 		truncated.
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (len);
}
