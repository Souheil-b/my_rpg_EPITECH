/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** string
*/

#include "rpg.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i = i + 1;
    }
}
