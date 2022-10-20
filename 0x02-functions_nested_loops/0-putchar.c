#include "main.h"
/**
**main - Entry point
*
*@char : description, its a character type
*@_putchar() : is a funcyion
*Return: Always 0 (success)
*
*/

char _putchar(char);
int main(void)
{
char *ch = "_putchar";
while (*ch)
{
_putchar(*ch);
ch++;
}
{
_putchar('\n');
}
return (0);
}
