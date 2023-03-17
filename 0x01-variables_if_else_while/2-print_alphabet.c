#include <stdio.h>
/**
 * main - print_alphabet.c
 * Return: 0
 */
int main(void)
{
	char letter[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(letter[a]);
	}
	putchar('\n');
	return (0);
}
