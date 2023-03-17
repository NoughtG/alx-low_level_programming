#include <stdio.h>
/**
 * main - Smile in mirror
 * Return: 0
 */
int main(void)
{
	char reverse[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 25; a > -1; a--)
	{
		putchar(reverse[a]);
	}
	putchar('\n');
	return (0);
}
