#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
	int fd;
	char buf[READ_Buf_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	i = read(fd, &buf[0], letters);
	i = write(STDOUT_FILENO, &buf[0], i);

	close(fd);
	return (i);
}
