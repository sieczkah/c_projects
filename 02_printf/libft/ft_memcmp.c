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

int	ft_memcmp(const void *s1, const void *s2, size_t n);

/*
 * ft_memcmp() compares n bytes of memory areas s1 and s2.
 * Each byte is interpreted as unsigned char.
 * Passing a NULL pointer will result in an undefined behavior.
 * Passing a n bigger than the length of the memory area will result 
 * in an undefined behavior.
 * 
 * Parameters:
 * 		s1 - The first memory area.
 * 		s2 - The second memory area.
 * 		n - The number of bytes to be compared.
 * Return Value:
 * 		0 - if the two strings are identical.
 * 		> 0 - if the first differing byte in s1 is greater than that in s2.
 * 		< 0 - if the first differing byte in s1 is less than that in s2.
 * 	If n is zero, the return value is zero.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n > 0)
	{
		while (n--)
		{
			if (*(unsigned char *)s1 != *(unsigned char *)s2)
				return (*(unsigned char *)s1 - *(unsigned char *)s2);
			s1++;
			s2++;
		}
	}
	return (0);
}
