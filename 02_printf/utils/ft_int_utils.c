/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 23:21:12 by hsieczka          #+#    #+#             */
/*   Updated: 2023/12/01 23:21:14 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_int(int number)
{
	char	*str;
	int		size;

	str = ft_itoa(number);
	size = ft_print_str(str);
	free(str);
	return (size);
}

int	ft_print_uint(unsigned int number)
{
	char	*str;
	int		size;

	str = ft_uitoa(number);
	size = ft_print_str(str);
	free(str);
	return (size);
}
