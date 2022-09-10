#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char paschal;

	for (paschal = 'a'; paschal <= 'z'; paschal++)
		putchar(paschal);
	for (paschal = 'A'; paschal <= 'Z'; paschal++)
		putchar(paschal);
	putchar('\n');
	return (0);
}
