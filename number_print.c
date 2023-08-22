#include "main.h"
#include <stdlib.h>

/**
 * numb_unsigned - print all numbers
 * @x: unsigned int
 * Return: len printed
 */
int numb_unsigned(unsigned int x)
{
unsigned int *tab, num;
int i = 0, sum = 0, r = 0;
if (x == 0)
{
_putchar('0');
return (1);
}
num = x;
while (num > 0)
{
i++;
num /= 10;
}
r = i;
i = 0;
num = x;
tab = (unsigned int *)malloc(sizeof(unsigned int) * r);
while (num > 0)
{
tab[i] = num % 10;
num /= 10;
i++;
}
for (i = r - 1; i >= 0; i--)
{
_putchar('0' + tab[i]);
sum++;
}
free(tab);
return (sum);
}

/**
 * calculate_lenght - count how many numbers
 * @x: int
 * Return: lenght
 */
int calculate_lenght(int x)
{
int len = 0;

while (x > 0)
{
len++;
x /= 10;
}
return (len);
}

/**
 * number_printing - print all numbers
 * @tab: array
 * @moins: negative flag
 * @r : int
 * Return: len printed
 */
int number_printing(int *tab, int moins, int r)
{
int i, sum = 0;

if (moins == 1)
{
_putchar('-');
sum++;
}
for (i = r - 1; i >= 0; i--)
{
_putchar('0' + tab[i]);
sum++;
}
return (sum);
}

/**
 * number_integer - print integer
 * @x: int
 * Return: number of chars printed
 */
int number_integer(int x)
{
int r = 0, *tab;
int i = 0, sum = 0;
int num, moins = 0;

if (x == 0)
{
_putchar('0');
return (1);
}
if (x < 0)
{
moins = 1;
x *= -1;
}
num = x;
r = calculate_lenght(num);
tab = (int *)malloc(sizeof(int) * r);
while (num > 0)
{
tab[i] = num % 10;
num /= 10;
i++;
}
sum = number_printing(tab, moins, r);
free(tab);
return (sum);
}
