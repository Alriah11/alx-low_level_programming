#include <unistd.h>

/***
 * _putchar - writes the characre c to stdout 
 * @c: the character to ptint
 *
 * Return: on success 1.
 * on erorr, -1 is returnod, and errno is appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
