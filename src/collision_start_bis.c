/*
** EPITECH PROJECT, 2020
** corewar
** File description:
** collision_start_bis
*/

#include "rpg.h"

void fnct_nine(struct_t *init)
{
    if (init->perso.pos.x <= 1036 && init->perso.pos.x >= 622 &&
    init->perso.pos.y >= 602 && init->perso.pos.y <= 700) {
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
    if (init->perso.pos.x > 1126) {
        init->perso.move = 2;
        init->perso.pos.x -= 6;
    }
}

void fnct_ten(struct_t *init)
{
    if (init->perso.pos.x <= 1036 && init->perso.pos.x >= 940 &&
    init->perso.pos.y >= 542 && init->perso.pos.y <= 700) {
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
}

void fnct_elev(struct_t *init)
{
    if (init->perso.pos.x <= 316 && init->perso.pos.x >= 0 &&
    init->perso.pos.y >= 476) {
        init->perso.move = init->perso.dir;
        if (init->perso.dir == 1)
            init->perso.pos.y -= 6;
        if (init->perso.dir == 3)
            init->perso.pos.x += 6;
    }
    if (init->perso.pos.x <= 370 && init->perso.pos.x >= 256 &&
    init->perso.pos.y <= 302) {
        init->perso.move = 0;
        init->perso.pos.y += 6;
    }
}

void fnct_eight(struct_t *init)
{
    if (init->perso.pos.x <= 712 && init->perso.pos.x >= 622 &&
    init->perso.pos.y >= 572 && init->perso.pos.y <= 700) {
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
    fnct_nine(init);
    fnct_ten(init);
    fnct_elev(init);
}

void fnct_sev(struct_t *init)
{
    if (init->perso.pos.x <= 904 && init->perso.pos.x >= 808 &&
    init->perso.pos.y >= 506 && init->perso.pos.y <= 578) {
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
    fnct_five(init);
    fnct_six(init);
    fnct_eight(init);
}