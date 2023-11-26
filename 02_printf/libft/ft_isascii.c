/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:06:57 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:06:59 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_isascii - Checks if a character is an ASCII character.
 * ASCII characters are characters with a decimal value between 0 and 127
 *
 * Parameters:
 *		c - The character to be checked, represented as an int.
 *
 * Return Value:
 *		Returns 1 if 'c' is an ASCII character, 0 otherwise.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
