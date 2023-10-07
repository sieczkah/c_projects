/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:10:44 by hsieczka          #+#    #+#             */
/*   Updated: 2023/10/04 23:53:48 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c);

char	*ft_strchr(const char *str, int c)
{
	char	*first_occur;

	first_occur = NULL;
	while (*str)
	{
		if (*str == c)
		{
			first_occur = (char *)str;
			return (first_occur);
		}
		str++;
	}
	return (first_occur);
}
