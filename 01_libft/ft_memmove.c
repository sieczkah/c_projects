/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:09:35 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/01 20:23:35 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len);

void *ft_memmove(void *dest, const void *src, size_t len)
 {
 	unsigned char		*d;
 	const unsigned char	*s;

 	d = (unsigned char *)dest;
 	s = (const unsigned char *)src;
 	if (s < d && s + len > d)
 	{
 		s += len;
 		d += len;
 		while (len--)
 			*(d--) = *(s--);
 	}
 	else
 	{
 		while (len--)
 			*d++ = *s++;
 	}
 	return (dest);
}

