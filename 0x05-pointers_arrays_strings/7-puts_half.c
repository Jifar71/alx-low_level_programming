#include "main.h"

/**
 *puts_half - prints every character of the string
 *@str: A pointer an int that will be changed 
 *
 *Return: void that means our answer is correct
 */

void pits_half(char *str)

{
int i, last;

i = 0;
while (str[i] != '\0')
{
i++;
}

last = (i + 1) / 2;

for (i = last; str[i]; i++)
{
_putchar (str[i]);
}

_putchar ('\n');


}
