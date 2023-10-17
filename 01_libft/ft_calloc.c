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

void	*ft_calloc(size_t n_elems, size_t size);

void	*ft_calloc(size_t n_elems, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (n_elems == 0 || size == 0)
		return (NULL);
	total_size = n_elems * size;
	if (total_size / n_elems != size)
		return (NULL);
	ptr = malloc(size * n_elems);
	if (ptr)
		ft_memset(ptr, 0, total_size);
	return (ptr);
}
