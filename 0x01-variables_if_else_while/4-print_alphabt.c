#include <stdio.h>
/**
 * main - Alphabet SOup
 * Return: 0
 */
int main(void)
{
	char missingLetter[24] = "abcdfghijklmnoprstuvwxyz";
	int a;

	for (a = 0; a < 24; a++)
	{
		putchar(missingLetter[a]);
	}
	putchar('\n');
	return (0);
}
