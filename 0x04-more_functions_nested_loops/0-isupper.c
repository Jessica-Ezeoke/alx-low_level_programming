#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: function parameter
 *Return: returns 0 on success 1 on failure
 */



int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}
