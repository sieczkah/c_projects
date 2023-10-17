/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:53:00 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/19 22:53:01 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_join;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	str_join = malloc((total_len + 1) * sizeof(char));
	if (!str_join)
		return (NULL);
	ft_strlcpy(str_join, s1, total_len + 1);
	ft_strlcat(str_join, s2, total_len + 1);
	return (str_join);
}
