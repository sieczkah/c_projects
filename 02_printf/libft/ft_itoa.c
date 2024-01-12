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
static int		get_num_size(long long n);

/*
* ft_itoa - Converts an integer to a string.
* Converts an integer to a null-terminated string. 
* The string is created in the heap, and it's the responsibility 
* of the caller to free it when it's no longer needed.
* Negative numbers are handled correctly, 
* with a '-' sign added at the start of the string.
*
* Parameters:
* 		n - The integer to convert.
* Returns:
* 		The string representation of the integer,
* 		or NULL if the allocation fails.
*/
char	*ft_itoa(int n)
{
	int		len;
	char	*str_num;
	int		sign;

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

char	*ft_uitoa(unsigned int n)
{
	int		len;
	char	*str_num;

	len = get_num_size(n);
	str_num = malloc(len + 1);
	if (!str_num)
		return (NULL);
	str_num[len] = '\0';
	while (len -- > 0)
	{
		str_num[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str_num);
}


static int	get_num_size(long long n)
{
	int	len;

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