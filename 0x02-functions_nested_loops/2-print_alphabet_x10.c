#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10
 *
 * Description: prints 10 times
 * Return: Always(0).
 */

void print_alphabet_x10(void)
{
int alphabet;
int increase;
increase = 0;
while (increase < 0)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
increase++;
_putchar('\n');
}
}
