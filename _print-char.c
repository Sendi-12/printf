#include "main.h"
 
 /**
 * char_print - prints one character
 * @x: char
 * Return: number of character printed
*/

int char_print(int x)
{
    _putchar(x);
    return(1);
}

/**
 * string_print - prints a string
 * @str: string
 * Return: number of character printed
*/

int string_print(char *str)
{
    int x, sum = 0;
    
    if (str == NULL)
        return(sum);
    for (x = 0; str[x] != '\0'; x++)
    {
        _putchar(str[x]);
        sum++;
    }
    return(sum);
}

