#include "printf.h"

int ft_counts(intptr n)
{
    int count;

    count = 1;
    while (n > 16)
    {
        n = n / 16;
        count++;
    }
    return (count);
}

char    ft_converttochar(int n)
{
    char    c;
    int     i;
    c = 'a';
    i = 10;
    while (n >= 10)
    {
        if (n == i)
        {
            break;
        }
        c++;
        i++;
    }
    if (n < 10)
    {
        c = '0' + n;
    }
    return (c);
}
char    *ft_ultopointer(intptr n)
{
    int     strlen;
    char    *str;

    strlen = ft_counts(n) + 2;
    str = (char*)malloc((strlen + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[strlen] = '\0';
    strlen--;
    while (n >= 16 && strlen > 2)
    {
        str[strlen] = ft_converttochar(n%16);
        n = n / 16;
        strlen--;
    }
    str[strlen] = ft_converttochar(n);
    str[0] = '0';
    str[1] = 'x';
    return (str);
}