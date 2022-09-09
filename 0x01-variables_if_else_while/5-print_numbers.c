#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  Prints all numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print("%d", i);
	printf("\n");

	return (0);
}
