/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:00:18 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/20 00:00:19 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd);

/*
* ft_putnbr_fd - Outputs an integer to a file descriptor.
* Outputs the integer 'n' to the given file descriptor 'fd'.
* This function does not return a value.
*
* Parameters:
* 		n - The integer to output.
* 		fd - The file descriptor on which to write.
*/

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	abs_num;
	char			digit;

	if (n < 0)
	{
		write(fd, "-", 1);
		abs_num = (unsigned int)(n * -1);
	}
	else
		abs_num = (unsigned int)(n);
	if (abs_num >= 10)
		ft_putnbr_fd(abs_num / 10, fd);
	digit = (abs_num % 10) + '0';
	write(fd, &digit, 1);
}
