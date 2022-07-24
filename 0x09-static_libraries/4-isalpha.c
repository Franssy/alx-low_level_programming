#include "main.h"
/**
 *  * _isalpha - function to check if c is a letter, lowercase or uppercase
 *   * @z: is the int that will use for the argument of the function
 *    * Return: 0
 *     */
int _isalpha(int z)
{
	if (z >= 'a' && z <= 'x')
	{
	return (1);
	}
	else if (z >= 'A' && z <= 'X')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
