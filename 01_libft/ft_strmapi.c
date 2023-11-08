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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

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
