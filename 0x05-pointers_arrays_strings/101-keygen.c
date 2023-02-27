#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, c, sum;
sum = 0;
srand(time(NULL));
for (i = 0; sum < (2772 - 122); i++)
{
c = rand() % ('~' - '!') + '!';
sum += c;
putchar(c);
}
putchar(2772 - sum);
return (0);
}
