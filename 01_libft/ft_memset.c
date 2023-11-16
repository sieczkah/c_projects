/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:08:34 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/08 17:31:20 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

/*
 * ft_memset - Fills a block of memory with a specified value.
 * Passing a NULL pointer to s will result in undefined behavior.
 * 
 * Parameters:
 *		s - A pointer to the block of memory to fill.
 *		c - The value to be set.
 *		n - The number of bytes to be set to the value.
 *
 * Return Value:
 *		Returns a pointer to the memory block.
 */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}
