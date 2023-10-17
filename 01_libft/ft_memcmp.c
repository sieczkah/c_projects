/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:11:36 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:11:37 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n);

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	if (n > 0)
	{
		while (n--)
		{
			if (*(unsigned char *)str1 != *(unsigned char *)str2)
				return (*(unsigned char *)str1 - *(unsigned char *)str2);
			str1++;
			str2++;
		}
	}
	return (0);
}
