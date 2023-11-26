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

void	*ft_memset(void *b, int c, size_t len);

/*
 * ft_memset - Fills a block of memory with a specified value.
 * Passing a NULL pointer to b will result in undefined behavior.
 * 
 * Parameters:
 *		b - A pointer to the block of memory to fill.
 *		c - The value to be set.
 *		len - The number of bytes to be set to the value.
 *
 * Return Value:
 *		Returns a pointer to the memory block.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}
