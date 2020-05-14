/*
** EPITECH PROJECT, 2020
** corewar
** File description:
** fnct_five
*/

#include "rpg.h"

void fnct_five(struct_t *init)
{
    if (init->perso.pos.x <= 586 && init->perso.pos.x >= 490 &&
    init->perso.pos.y >= 506 && init->perso.pos.y <= 572) {
        init->perso.move = init->perso.dir;
        if (init->perso.dir == 0)
            init->perso.pos.y += 6;
        if (init->perso.dir == 1)
            init->perso.pos.y -= 6;
        if (init->perso.dir == 2)
            init->perso.pos.x -= 6;
        if (init->perso.dir == 3)
            init->perso.pos.x += 6;
    }
    if (init->perso.pos.x >= 376 && init->perso.pos.x <= 418 &&
    init->perso.pos.y < 350) {
        init->perso.move = 0;
        init->perso.pos.y += 6;
    }
}