#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints all single digits numbers at base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c >= 'a')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
