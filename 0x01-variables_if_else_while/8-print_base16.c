#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all number of base 16 in lowercase.
 * Description: prints all single digit numbers of base 16
 * Return: 0
 */
int main(void)
{
int num;
char letter;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
