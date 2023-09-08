#include "main.h"
#include <stdlib.h>


/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: actual number of bytes read and printed
*        0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	int rdBytes, wrtBytes;


	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
		
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	
	rdBytes = read(fd, buff, letters);
	wrtBytes = write(STDOUT_FILENO, buff, letters);

	if (rdBytes == -1 || rdBytes == wrtBytes || wrtBytes == -1)
		{
			free(buff);
			close(fd);
			return (0);
		}

	close(fd);
	return (wrtBytes);
}
