/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:57:29 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/26 11:57:31 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *input, ...);
int		ft_print_char(int c);
int		ft_print_str(char *str);
void	ft_upper_str(char *str);
int		ft_print_int(int number);
int		ft_print_uint(unsigned int number);
int		ft_get_hex_size(unsigned long long num);
int		ft_print_hex(unsigned int num, int upper);
int		ft_print_address(unsigned long long ptr);
int		ft_print_hex_address(unsigned long long num);

#endif
