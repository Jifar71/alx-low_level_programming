#include "main.h"

/**
 *puts2 - prints every character of string
 *@str: A pointer to an int that will be changed
 *
 *Return: void that means all answer is correct
 */

void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar (str[a]);
}

_putchar ('\n');
}
