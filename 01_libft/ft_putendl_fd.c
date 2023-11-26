/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:00:07 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/20 00:00:08 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd);

/*
* ft_putendl_fd - Outputs a string to a file descriptor, followed by a newline.
* Outputs the string 's' to the given file descriptor 'fd', 
* followed by a newline.
* This function does not return a value.
*
* Parameters:
* 		s - The string to output.
* 		fd - The file descriptor on which to write.
*/
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
