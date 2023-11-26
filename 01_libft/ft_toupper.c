/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:10:20 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/08 18:19:00 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c);

/* 
 * The ft_toupper() function converts a lower-case letter to the corresponding
 * upper-case letter.
 * 
 * Params:
 * 	c - character to convert
 *
 * RETURN VALUES
 * If the argument is a lower-case letter, the ft_toupper() function returns the
 * corresponding upper-case letter if there is one; otherwise, the argument is
 * returned unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - ('a' - 'A'));
	}
	return (c);
}
