#include <stdio>
/**
 * main - alphABET
 * Return: 0
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALPH[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;
	int b;

	for (a = 0; a < 26; a++)
	{
		putchar(alph[a]);
	}
	for (b = 0; b < 26; b++)
	{
		putchar(ALPH[b]);
	}
	putchar('\n');
	return (0);
}
