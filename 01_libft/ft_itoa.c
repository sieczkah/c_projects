/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:07:31 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/19 23:07:32 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n);
static size_t	get_num_size(int n);

char	*ft_itoa(int n)
{
	size_t		len;
	char		*str_num;
	int			sign;

	sign = 1;
	len = get_num_size(n);
	if (n < 0)
		sign = -1;
	str_num = malloc((len + 1) * sizeof(char));
	if (!str_num)
		return (NULL);
	str_num[len] = '\0';
	while (len-- > 0)
	{
		str_num[len] = (sign * (n % 10)) + '0';
		n /= 10;
	}
	if (sign < 0)
		str_num[0] = '-';
	return (str_num);
}

static size_t	get_num_size(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
