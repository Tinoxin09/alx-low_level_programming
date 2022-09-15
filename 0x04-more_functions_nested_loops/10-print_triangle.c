#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: an int given by main`
 * Description: Uses headers to link and a nested loops to achieve goal
 * Return: void. no return.
 */
void print_triangle(int size)
{
	int a, b;
	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = size - a - 1; b > 0; b--)
			_putchar(' ');
		for (b = a + 1; b > 0; b--)
			_putchar('#');
		_putchar('\n');
	}
}
