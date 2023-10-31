#include "main.h"
/**
 * _sqrt - function to find the root
 * @n: number sq
 * @root: num for multiplies
 * Return: -1 for not sqr root if it is have root natural
 */

int _sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	else
		return (_sqrt(n, root + 1));
}
/**
 * _sqrt_recursion - function for root
 * @n: number to check
 * Return: root of num;
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
