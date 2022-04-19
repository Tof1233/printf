#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 0 on success and -1 error and errno is set appropiately
 */
int _putchar(char c)
{
	static int contador;
	static char buffer[1024];

	if (c == -1)
	{
		contador = 0;
		return (0);
	}
	if (c == -2 || contador == 1024)
	{
		write(1, buffer, contador);
		contador = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[contador] = c;
		contador++;
		return (1);
	}
	return (0);
}
