/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:12:01 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:12:02 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str);

/*
 * The atoi() function converts the initial portion of the string pointed to by
 * str to int representation. It ignores any whitespace characters until the
 * first non-whitespace character is found, then takes as many characters as
 * possible to form a valid integer number representation and converts them to
 * an integer value. The valid integer value consists of the following parts:
 * 		(1) optional leading sign
 * 		(2) a sequence of digits
 * 
 * Parameters:
 * 		str - A pointer to the string to be converted.
 * Return Value:
 * 		The converted value.
 * 		If no valid conversion could be performed, it returns zero.
 */
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
