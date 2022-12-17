#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
<<<<<<< HEAD
void print_diagonal(int n)
{
 if (n <= 0)
 {
 _putchar('\n');
 else
 }
 {
 int i, j;

 for (i = 0; i < n; i++)
 {
 for (j = 0; j < n; j++)
 {
 if (j == i)
 _putchar('\\');
 else if (j < i)
 _putchar(' ');
 }
 _putchar('\n');
 }
 }
=======

void print_diagonal(int n)
{
	int line, gap;

	if (n > 0)
	{
	for (line = 0; line <= n; line++)
	{
	for (gap = 0; gap <= line; gap++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	if (line == n - 1)
	{
	continue;
	}
	_putchar('\n');
	}
	}
	_putchar('\n');
>>>>>>> bc3ce4d3defa549349c0288df82ad2c58c3d4504
}
