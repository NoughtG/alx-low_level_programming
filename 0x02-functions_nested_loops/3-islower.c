#include "main.h"
/**
 * main - islower
 * Return: 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
