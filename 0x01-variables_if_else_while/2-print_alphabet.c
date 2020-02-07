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

	while (a <= z)
	{
	putchar(a);
	a++;
	}
	putchar('\n');
	return (0);
}
