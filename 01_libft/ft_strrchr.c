/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:48:14 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/04 23:54:08 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c);

/*
 * The strrchr() function locates the last occurrence of c (converted to a char)
 * in the string pointed to by s.  The terminating null character is considered
 * to be part of the string; therefore if c is `\0', the functions locate the
 * terminating `\0'.
 * Passing NULL as argument to the function results in undefined behavior.
 *
 * RETURN VALUES
 * The functions strrchr() return a pointer to the located character, or NULL if
 * the character does not appear in the string.
 */

char	*ft_strrchr(const char *s, int c)
{
	char	*last_ocur;

	last_ocur = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_ocur = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last_ocur);
}
