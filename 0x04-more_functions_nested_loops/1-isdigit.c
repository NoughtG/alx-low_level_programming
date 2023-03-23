#include "main.h"

/**
 * _isdigit - check if digit 
 * @x: digit to be checked
 * Return: 1 if character is digit. Else return 0
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
