#include "main.h"

/**
 * _islower -This program checks if char is a lowercase letter
 * 
 * Return: 1 if char is lowercase, otherwise returns 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
