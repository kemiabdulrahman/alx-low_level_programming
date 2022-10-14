#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success/valid)
 */
int main(void)
{
int number_left;
int number_right;
number_left = 48;
number_right = 48;
while (number_left < 58)
{
number_right = number_left + 1;
while (number_right < 58)
{
putchar(number_left);
putchar(number_right);
if ((number_left < 56) || (number_right < 57))
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
