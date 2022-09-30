#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: argument counter
 * @argv: array of pointer to argument strings
 * Return: 0
 **/
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
