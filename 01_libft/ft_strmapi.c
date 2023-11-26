/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:08:01 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/19 23:08:02 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
* ft_strmapi - Applies a function to each character of a string.
* Applies the function 'f' to each character of the string 's' to create 
* a new string.
* This new string is created in the heap, and it's the responsibility 
* of the caller to free it when it's no longer needed.
* The function 'f' takes as parameters the index of the character 
* in the string and the character itself.
*
* Parameters:
* 		s - The string to iterate over.
* 		f - The function to apply to each character of 's'.
* Returns:
* 		The string created from the successive applications of 'f',
* 		or NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s)
		return (NULL);
	new_str = ft_strdup(s);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (new_str[i])
	{
		new_str[i] = f(i, new_str[i]);
		i++;
	}
	return (new_str);
}
