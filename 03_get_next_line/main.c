#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
	int		fd;
	char	*line_read;
	int		count;

	count = 0;
	fd = open("example.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error while opening a file");
		return (1);
	}
	while (1)
	{
		line_read = get_next_line(fd);
		if (line_read == NULL)
			break;
		printf("[%d]:%s\n", count++, line_read);
		free(line_read);
		line_read = NULL;
	}
	close (fd);
	return (0);
}