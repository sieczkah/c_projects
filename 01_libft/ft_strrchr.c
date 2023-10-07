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

char	*ft_strrchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c)
{
	char *last_p;

	last_p = NULL;
	while (*str)
	{
		if (*str == c)
			last_p = (char *)str;
		str++;
	}
	return (last_p);
}
