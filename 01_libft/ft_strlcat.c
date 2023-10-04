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
// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
// unsigned int	ft_strlen(char *str);

// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
// {
// 	unsigned int	dest_len;
// 	unsigned int	src_len;
// 	unsigned int	i;

// 	dest_len = ft_strlen(dest);
// 	src_len = ft_strlen(src);
// 	i = 0;
// 	if (size <= dest_len)
// 		return (src_len + size);
// 	if (size > 0)
// 	{
// 		while (src[i] && i < size - dest_len - 1)
// 		{
// 			dest[dest_len + i] = src[i];
// 			i++;
// 		}
// 	}
// 	dest[dest_len + i] = '\0';
// 	return (dest_len + src_len);
// }

// unsigned int	ft_strlen(char *str)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest[50]="123";
	char	src[10]="4567123";

	printf("%lu\n", strlcat(dest, src, 5));
	printf("%d\n", ft_strlcat(dest, src, 5));
	printf("%s\n", dest);
}*/