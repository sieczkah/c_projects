/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:08:14 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/19 23:08:16 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/*
* ft_striteri - Applies a function to each character of a string.
* Applies the function 'f' to each character of the string 's'. The function 'f' 
* takes as parameters the index of the character in the string and 
* a pointer to the character itself.
* This function does not return a value and does not create a new string. 
* Instead, it modifies the original string in place.
*
* Parameters:
* 		s - The string to iterate over.
* 		f - The function to apply to each character of 's'.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
