#include <stdio.h>
#include <time,h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints all single digit number of base 10
 * starting from 0, followed by new line.
 * Return: 0
 */
int main(void)
{
	char c = 0;

	while (c <= '0')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
