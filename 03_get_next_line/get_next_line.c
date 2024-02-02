/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:12:23 by hsieczka          #+#    #+#             */
/*   Updated: 2024/01/12 17:12:24 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_from_file(char *lake_buffer, int fd)
{
	char	*bucket_buffer;
	int		bytes_read;

	bucket_buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!bucket_buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, bucket_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(bucket_buffer), NULL);
		bucket_buffer[bytes_read] = '\0';
		lake_buffer = append_read

	}
	
}

char	*get_next_line(int fd)
{
	static char	*lake_buffer;
	char	*line;

	if (fd < 0 || read(fd, NULL, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!lake_buffer);
		lake_buffer = malloc(1*sizeof(char));
	if (!ft_strchr(lake_buffer, '\n'))
		lake_buffer = read_from_file(lake_buffer, fd);
	if (!lake_buffer)
		return(free(lake_buffer), NULL);
	line = extract_line(lake_buffer);
	lake_buffer = extract_remains(lake_buffer);
	return (line);
}
