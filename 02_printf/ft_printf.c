/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:57:00 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/26 11:57:01 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_type(const char *input, va_list *args);

int	ft_printf(const char *input, ...)
{
	va_list	args_list;
	int		print_len;

	print_len = 0;
	va_start(args_list, input);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			if (ft_strchr("cspdiuxX", *input))
				print_len += print_type(input, &args_list);
			else if (*input == '%')
				print_len += ft_print_char(*input);
		}
		else
			print_len += ft_print_char(*input);
		input++;
	}
	va_end(args_list);
	return (print_len);
}

int	print_type(const char *format, va_list *arg)
{
	int	print_len;

	print_len = 0;
	if (*format == 'c')
		print_len += ft_print_char(va_arg(*arg, int));
	else if (*format == 's')
		print_len += ft_print_str(va_arg(*arg, char *));
	else if (*format == 'p')
		print_len += ft_print_address(va_arg(*arg, unsigned long long));
	else if (*format == 'd' || *format == 'i')
		print_len += ft_print_int(va_arg(*arg, int));
	else if (*format == 'u')
		print_len += ft_print_uint(va_arg(*arg, unsigned int));
	else if (*format == 'x' || *format == 'X')
		print_len += ft_print_hex(va_arg(*arg, unsigned int), *format);
	return (print_len);
}
