/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:10:29 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/08 18:19:47 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c);

/* 
 * The ft_tolower() function converts a upper-case letter to the corresponding
 * lower-case letter.
 * 
 * Params:
 * 	c - character to convert
 *
 * RETURN VALUES
 * If the argument is a upper-case letter, the ft_tolower() function returns the
 * corresponding lower-case letter if there is one; otherwise, the argument is
 * returned unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}
