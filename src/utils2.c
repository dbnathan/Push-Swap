/*
** EPITECH PROJECT, 2023
** pushswap_codingstyle
** File description:
** utils2
*/

#include "../include/pushswap.h"

void my_putnbr(int nb)
{
    int i = 0;
    char str[12];

    if (nb < 0) {
        write(1, "-", 1);
        nb = nb * -1;
    }
    if (nb == 0)
        write(1, "0", 1);
    while (nb > 0) {
        str[i] = (nb % 10) + 48;
        nb = nb / 10;
        i++;
    }
    str[i] = '\0';
    my_putstr(str);
}
