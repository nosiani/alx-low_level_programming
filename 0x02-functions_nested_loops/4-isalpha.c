#include "main.h"

/**
 * _isalpha - This program checks if character is alphabetic
 *
 * Return: 1 if c is an alphabet, returns 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
