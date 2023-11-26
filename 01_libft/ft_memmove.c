/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:09:35 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/08 18:00:21 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len);

/*
 * ft_memmove - Copies len bytes from memory area src to memory area dst.
 * The memory areas may overlap.
 * Passing a NULL pointer to dst or src will result in undefined behavior.
 *
 * If dst and src overlap in memory, memmove() ensures that the original
 * source bytes in the overlapping region are copied before being overwritten.
 * 
 * Parameters:
 *		dst - A pointer to the destination memory area.
 *		src - A pointer to the source memory area.
 *		len - The number of bytes to be copied.
 *
 * Return Value:
 *		Returns a pointer to dst.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else if (d < s)
		ft_memcpy(dst, src, len);
	return (dst);
}
