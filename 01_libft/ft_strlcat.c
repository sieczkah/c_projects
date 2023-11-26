/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:10:08 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/08 00:02:43 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*
 * ft_strlcat - Appends the NULL-terminated string src to the end of dst.
 * It will append at most dstsize - strlen(dst) - 1 characters.
 * It will then NULL-terminate, unless dstsize is 0 or the original dst string
 * was longer than dstsize.
 * If the src and dst strings overlap, the behavior is undefined.
 * Passing a NULL pointer to dst or src will result in undefined behavior.
 *
 * Parameters:
 *		dst - A pointer to the destination string.
 *		src - A pointer to the source string.
 *		dstsize - The dstsize of the destination buffer.
 *
 * Return Value:
 * 		Returns the total length of the string tried to create.
 * 		If the return value is >= dest_size, the output string has been
 * 		truncated.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_len || dstsize == 0)
		return (dstsize + src_len);
	while (src[i] && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = 0;
	return (dst_len + src_len);
}
