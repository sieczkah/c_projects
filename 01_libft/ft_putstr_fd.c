/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:59:47 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/19 23:59:48 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);

/*
* ft_putstr_fd - Outputs a string to a file descriptor.
* Outputs the string 's' to the given file descriptor 'fd'.
* This function does not return a value.
*
* Parameters:
* 		s - The string to output.
* 		fd - The file descriptor on which to write.
*/
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
