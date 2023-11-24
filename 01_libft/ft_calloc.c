/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:12:15 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:12:29 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size);

/*
 * The calloc() function allocates memory for an array of count elements of size
 * size each and returns a pointer to the allocated memory. The memory is set
 * to zero. If count or size is 0, then calloc() returns either NULL, or a
 * unique pointer value that can later be successfully passed to free().
 * 
 * Parameters:
 * 		count - Number of elements to allocate.
 * 		size - Size of each element.
 * Return Value:
 * 		A pointer to the allocated memory.
 * 		If count or size is 0, then calloc() returns either NULL, or a unique
 * 		pointer value that can later be successfully passed to free().
 */

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
