#include "holberton.h"
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = -1 * a;
		return (a);
	}
	return (0);
}
