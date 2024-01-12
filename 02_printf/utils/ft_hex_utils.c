/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:53:29 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/30 21:53:30 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_address(unsigned long long ptr);
int	ft_print_hex_address(unsigned long long num);
int	ft_get_hex_size(unsigned long long num);
int	ft_print_hex(unsigned int num, int upper);

int	ft_print_address(unsigned long long ptr)
{
	int	size;

	size = 0;
	size += ft_print_str("0x");
	size += ft_print_hex_address(ptr);
	return (size);
}

int	ft_get_hex_size(unsigned long long num)
{
	int	size;

	size = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 16;
		size++;
	}
	return (size);
}

int	ft_print_hex(unsigned int num, int upper)
{
	int		size;
	char	*hex_str;
	int		i;

	size = ft_get_hex_size(num);
	hex_str = malloc(size + 1);
	if (hex_str == NULL)
		return (ft_print_str("(null)"));
	hex_str[size] = '\0';
	i = size - 1;
	while (i >= 0)
	{
		if ((num % 16) < 10)
			hex_str[i] = '0' + (num % 16);
		else
			hex_str[i] = 'a' + (num % 16 - 10);
		num /= 16;
		i--;
	}
	if (upper == 'X')
		ft_upper_str(hex_str);
	i = ft_print_str(hex_str);
	free(hex_str);
	return (i);
}

int	ft_print_hex_address(unsigned long long num)
{
	int		size;
	char	*hex_str;
	int		i;

	size = ft_get_hex_size(num);
	hex_str = malloc(size + 1);
	if (hex_str == NULL)
		return (ft_print_str("(null)"));
	hex_str[size] = '\0';
	i = size - 1;
	while (i >= 0)
	{
		if ((num % 16) < 10)
			hex_str[i] = '0' + (num % 16);
		else
			hex_str[i] = 'a' + (num % 16 - 10);
		num /= 16;
		i--;
	}
	i = ft_print_str(hex_str);
	free(hex_str);
	return (i);
}
