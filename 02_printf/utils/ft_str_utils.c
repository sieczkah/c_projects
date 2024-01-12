/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:44:19 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/29 21:44:21 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	size;

	size = 0;
	if (str == NULL)
		return (ft_print_str("(null)"));
	while (*str)
	{
		size += ft_print_char(*str);
		str++;
	}
	return (size);
}

void	ft_upper_str(char *str)
{
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}
