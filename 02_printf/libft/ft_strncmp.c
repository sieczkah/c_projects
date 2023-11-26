/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:11:10 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:11:14 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

/*
 * ft_strncmp - compare two strings
 * Passes in two strings and a n of bytes to compare
 * Passing a NULL pointer to a string will result in an undefined behavior
 *
 * Parameters:
 * 		s1 - A pointer to the first string to be compared.
 * 		s2 - A pointer to the second string to be compared.
 * 		n - The number of bytes to be compared.
 * Return Value:
 * 		Returns an integer less than, equal to, or greater than zero if s1 is
 * 		found, respectively, to be less than, to match, or be greater than s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2 || !*s1 || !*s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
