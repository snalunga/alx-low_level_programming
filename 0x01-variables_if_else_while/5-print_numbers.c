#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints all single digit number of base 10
 * starting from 0, followed by new line.
 * Return: 0
 */
int main(void)
{
	int s = 0, e = 9;

	while (s <= 'e')
	{
		putchar(s + '0');
		s++;
	}

	putchar('\n');

	return (0);
}
