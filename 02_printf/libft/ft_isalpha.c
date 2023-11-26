/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:06:11 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:06:19 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_isalpha - Checks if a character is an alphabetic (a-z, A-Z) letter.
 *
 * Parameters:
 *		c - The character to be checked, represented as an int.
 *
 * Return Value:
 *		Returns 1 if 'c' is an alphabetic letter, 0 otherwise.
*/
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
