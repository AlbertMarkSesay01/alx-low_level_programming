#include <stdio.h>
#include <unistd.h>
/**
 * main - prints exactly 'and thst piece of art is useful'
 * - Dora korpar, 2015-10-19,
 * Return: always 0
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
