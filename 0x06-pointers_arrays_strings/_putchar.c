#include <unistd.h>
<<<<<<< HEAD

=======
>>>>>>> 05abd3004117bdc32a082ff88c5b7475d9749cbe
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
