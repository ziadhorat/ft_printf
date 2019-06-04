#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void varstrings(const char *format, ...)   /* the ellipsis indicates variable arguments */
{
    int i;
    va_list args;

    i = 0;
    va_start(args, format);
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == 'd')
                printf("%d", va_arg(args, int));
            i+=2;
        }
        else
        {
            printf("%c", format[i]);
            i++;
        }
    }
    va_end(args);
}

int main(void)
{
    varstrings("%d %d", 2, 3);
}
