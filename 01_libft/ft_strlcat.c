/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:10:08 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/03 00:56:13 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = 0;
	if (dst_size > 0)
	{
		while (src[i] && i < dst_size - dst_len - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = 0;
	return (dst_len + ft_strlen(src));
}
