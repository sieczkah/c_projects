/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:16:08 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:16:09 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str);

char	*ft_strdup(const char *str)
{
	char	*s_dup;
	size_t	size;

	size = ft_strlen(str) + 1;
	s_dup = malloc(size * sizeof(char));
	if (s_dup)
		s_dup = ft_memcpy(s_dup, str, size);
	return (s_dup);
}
