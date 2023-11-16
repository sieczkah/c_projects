/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:08:45 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/25 19:52:38 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

/*
 * ft_bzero - Sets the first n bytes of the block of memory pointed by s to zero.
 * Passing a NULL pointer to s will result in undefined behavior.
 * 
 * Parameters:
 *		s - A pointer to the block of memory to fill.
 *		n - The number of bytes to be set to zero.
 *
 * Return Value:
 *		No return value (void).
 */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)('\0');
		ptr++;
		n--;
	}
}
