/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:07:14 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/20 23:28:36 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_isprint - Checks if a character is printable.
 * Printable characters are characters with a decimal value between 32 and 126
 * Parameters:
 *		c - The character to be checked, represented as an int.
 *
 * Return Value:
 *		Returns 1 if 'c' is printable, 0 otherwise.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
