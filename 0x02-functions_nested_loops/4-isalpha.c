#include "main.h"
/**
 * _isalpha checks for caps
 * @c: character
 * Return: 1
 */
int _isalpha(int c)
{
	if ((c >= 65 && c < 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
