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

int	ft_toupper(int c);

/* 
 * The toupper() function converts a lower-case letter to the corresponding
 * upper-case letter.  The argument must be representable as an unsigned char
 * or the value of EOF.
 *
 * RETURN VALUES
 * If the argument is a lower-case letter, the toupper() function returns the
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
