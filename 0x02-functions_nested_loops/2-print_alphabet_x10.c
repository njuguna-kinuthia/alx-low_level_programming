#include "main.h"

/**
 * print_alphabet_x10 - function init
 *
 * Return: nada
 *
 */
void print_alphabet_x10(void)
{
	char mychar;
	int i = 0;

	do
	{
		for (mychar = 'a'; mychar <= 'z'; ++mychar)
		{
			putchar(mychar);
		}
		i++;
	}
	putchar('\n');
	while (i < 10);
}
