/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:52:46 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/19 22:52:48 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

/*
* ft_substr:
* Takes as input a string 's', an unsigned integer 'start', and a size 'len'.
* Returns a new string that is a substring of 's'. The substring begins at
* index 'start' and is of maximum size 'len'. 
* If 'start' is greater than the length of 's', or if 'len' is 0,
* the function returns an empty string. 
* If 'len' is greater than the length of 's' starting from 'start',
* the substring extends to the end of 's'.
* The returned string is allocated with malloc and should be freed with free when
* no longer needed.
*
* Parameters:
* - s: The source string from which to create the substring
* - start: The index in 's' where the substring should start
* - len: The maximum length of the substring
*
* Return value:
* - The newly created substring, or NULL if the allocation fails
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	src_len;
	char	*substr;

	src_len = ft_strlen(s);
	if ((start >= ft_strlen(s)) || len == 0)
		return (ft_strdup(""));
	if (src_len - start < len)
		len = src_len - start;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
