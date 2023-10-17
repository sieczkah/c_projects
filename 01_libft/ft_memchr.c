/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:11:21 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:11:22 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n);

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		char_c;

	ptr = (const unsigned char *)str;
	char_c = (unsigned char)c;
	while (n--)
	{
		if (*ptr == char_c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
