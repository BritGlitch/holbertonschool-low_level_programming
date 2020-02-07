#include <stdio.h>
/**
 *main - the entry point
 *
 *Description: This program prints out the alphabet in lowercase letters.
 *Return: 0
 */
int main(void)
{
	char a = 'a';
	char z = 'z';
	char A = 'A';
	char Z = 'Z';

	while (a <= z)
	{
	putchar(a);
	a++;
	}
	while (A <= Z)
	{
	putchar(A);
	A++;
	}
	putchar('\n');
	return (0);
}
