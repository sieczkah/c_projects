/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:06:48 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:06:49 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c);

/* ft_isalnum - Checks if a character is alphanumeric (a-z, A-Z, 0-9).
 * Parameters:
 *		c - The character to be checked, represented as an int.
 *
 * Return Value:
 *		 Returns 1 if 'c' is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
