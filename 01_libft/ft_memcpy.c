/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:09:00 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/08 18:06:30 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);

/*
 * ft_memcpy - Copies n bytes from memory area src to memory area dst.
 * The memory areas must not overlap.
 * Passing a NULL pointer to dst or src will result in undefined behavior.
 *
 * Parameters:
 *		dst - A pointer to the destination memory area.
 *		src - A pointer to the source memory area.
 *		n - The number of bytes to be copied.
 *
 * Return Value:
 *		Returns a pointer to dst.
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (n > 0)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	return (dst);
}
