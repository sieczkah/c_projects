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

void	*ft_memmove(void *dest, const void *src, size_t n);

/*
 * ft_memmove - Copies n bytes from memory area src to memory area dest.
 * The memory areas may overlap.
 * Passing a NULL pointer to dest or src will result in undefined behavior.
 *
 * If dest and src overlap in memory, memmove() ensures that the original
 * source bytes in the overlapping region are copied before being overwritten.
 * 
 * Parameters:
 *		dest - A pointer to the destination memory area.
 *		src - A pointer to the source memory area.
 *		n - The number of bytes to be copied.
 *
 * Return Value:
 *		Returns a pointer to dest.
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (n == 0)
		return (dest);
	if (d < s || d >= (s + n))
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}
