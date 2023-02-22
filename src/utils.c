/*
** EPITECH PROJECT, 2023
** Pushswap
** File description:
** utils
*/

#include "../include/pushswap.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

bool is_only_digits(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return (false);
    }
    return (true);
}

bool verif_function(int ac, char **av)
{
    for (int i = 1; i < ac; i++) {
        if (!is_only_digits(av[i]))
            return (false);
    }
    return (true);
}

int my_getnbr(char *str)
{
    long var = 0;
    int neg = 1, i = 0;

    for (; (str[i] < '0' || str[i] > '9') && str[i] != '\0'; i++) {
        if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
            neg = -1;
    }
    for (; str[i] != 0 && str[i] >= '0' && str[i] <= '9'; i++) {
        var *= 10;
        var = var + str[i] - 48;
    }
    var *= neg;
    if (var >= 2147483647 || var <= -2147483647)
        return 0;
    return var;
}

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
