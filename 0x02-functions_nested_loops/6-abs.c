#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: the int to check
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
