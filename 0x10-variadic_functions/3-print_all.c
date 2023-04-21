#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: the va_list to get the char from
 */
void print_char(va_list args)
{
    printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: the va_list to get the int from
 */
void print_int(va_list args)
{
    printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: the va_list to get the float from
 */
void print_float(va_list args)
{
    printf("%f", va_arg(args, double));
}

/**
 * print_str - prints a string
 * @args: the va_list to get the string from
 */
void print_str(va_list args)
{
    char *str = va_arg(args, char*);

    if (str == NULL)
    {
        printf("(nil)");
    }
    else
    {
        printf("%s", str);
    }
}

/**
 * print_all - prints anything
 * @format: the format string that specifies the types of the arguments
 */
void print_all(const char * const format, ...)
{
    int i = 0;
    int j;
    char *separator = "";
    va_list args;
    void (*print_func)(va_list);

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        print_func = NULL;

        while (j < 4 && !print_func)
        {
            if (format[i] == "cifs"[j])
            {
                print_func = (void (*)(va_list)) (j == 0 ? print_char :
                                                    j == 1 ? print_int :
                                                    j == 2 ? print_float :
                                                    print_str);
            }
            j++;
        }

        if (print_func)
        {
            printf("%s", separator);
            print_func(args);
            separator = ", ";
        }

        i++;
    }

    printf("\n");
    va_end(args);
}
