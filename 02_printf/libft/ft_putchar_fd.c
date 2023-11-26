/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:08:24 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/19 23:08:24 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

/*
* ft_putchar_fd - Outputs a character to a file descriptor.
* Outputs the character 'c' to the given file descriptor 'fd'.
* This function does not return a value.
*
* Parameters:
* 		c - The character to output.
* 		fd - The file descriptor on which to write.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
