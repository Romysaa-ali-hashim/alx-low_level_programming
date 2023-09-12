
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - int _isalpha(int c)
 * @c: int  to test.
 *
 * Return: 1 (True) else 0 (False)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
