#include <stdio.h>

/*
*print_numbers - To print out 0-9
*Print out the numbers in decimal
*Return: Always 0 (Success)
*/

void print_numbers(void);
{
int num;

for (num = 48; num <= 57; num++)
{
_putchar(num);
}
_putchar(10);

return (0);
}