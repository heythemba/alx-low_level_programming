#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* Main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char low;
for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');
return (0);
}
