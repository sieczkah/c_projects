/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:06:36 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:06:37 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isdigit - Checks if a character is a digit (0-9).
 * Parameters:
 *		c - The character to be checked, represented as an int.
 *
 * Return Value:
 *		 Returns 1 if 'c' is a digit, 0 otherwise.
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
