/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:09:55 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/02 00:36:15 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if(dest_size == 0)
		return (len);
	i = 0;
	while (src[i] && (i < dest_size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return(len);
}
// unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
// {
// 	unsigned int	i;
// 	unsigned int	src_len;

// 	src_len = 0;
// 	while (src[src_len])
// 	{
// 		src_len++;
// 	}	
// 	i = 0;
// 	if (size != 0)
// 	{
// 		while (src[i] && i < size - 1)
// 		{
// 			dest[i] = src[i];
// 			i ++;
// 		}
// 		dest[i] = '\0';
// 	}
// 	return (src_len);
// }
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str[]="Hello1234325451434324234143242352342341";
// 	char	ft_dest[10];
// 	char	lib_dest[10];
// 	unsigned int	ft_length;
// 	unsigned int	lib_length;

// 	ft_length = ft_strlcpy(ft_dest, str, 100);
// 	printf("%d\n", ft_length);
// 	printf("%s\n", ft_dest);
// 	lib_length = strlcpy(lib_dest, str, 100);
// 	printf("%d\n", lib_length);
// 	printf("%s\n", lib_dest);
// }