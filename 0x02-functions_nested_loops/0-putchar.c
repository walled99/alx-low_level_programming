#include <unistd>

/**
 * _putchar - wrtie char c to stdout
 * @c: char will be printed
 *
 * Return: 1 (success)
 * -1 (fail, error)
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	_putchar("_putchar");
      
}
