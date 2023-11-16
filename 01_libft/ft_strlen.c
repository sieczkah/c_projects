/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:07:31 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/22 22:44:38 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

/*
 * ft_strlen - Calculates the length of a string.
 * Passing a NULL pointer to s will result in undefined behavior.
 * 
 * Parameters:
 *		s - The string to be measured.
 *
 * Return Value:
 *		Returns the length of the string.
*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
