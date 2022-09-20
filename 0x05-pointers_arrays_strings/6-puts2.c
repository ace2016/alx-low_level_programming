#include "main.h"
/**
 * puts2 - function to print pair values.
 * @str: value to be evaluate.
 * Return: not.
 */
void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *y = str;
	int z;
	
	/* get the string length*/

	while (*y != '\0')
	{
		y++;
		len++;
	}

	l = len - 1;
	
	/*Iterate through the value*/
	for (z = 0 ; z <= l ; z++)
	{
	/*check for the condition using remider*/
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
