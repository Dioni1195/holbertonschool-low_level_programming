#include <stdio.h>
#include <stdlib.h>
/**
  * op_add - Add two numbers
  * @a: First number
  * @b: Second number
  *
  * Return: The result.
  *
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Difference between two numbers
  * @a: First Number
  * @b: Second number
  *
  * Return: The difference between two numbers.
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - The multiplication between two numbers
* @a: First Number
* @b: Second number
*
* Return: The result of multiplication.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - The division between two numbers
 * @a: First Number
 * @b: Second number
 *
 * Return: The result of division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - The modulo between two numbers
 * @a: First Number
 * @b: Second number
 *
 * Return: The result of modulo.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
