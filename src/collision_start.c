/*
** EPITECH PROJECT, 2020
** corewar
** File description:
** collision_start
*/

#include "rpg.h"

void fnct_one(struct_t *init)
{
    if (init->perso.pos.x > 526 && init->perso.pos.y < 416) {
        init->perso.move = 0;
        init->perso.pos.y += 6;
    }
    else if (init->perso.pos.x >= 1012 && init->perso.pos.y <= 440) {
        init->perso.move = init->perso.dir;
        if (init->perso.dir == 0)
            init->perso.pos.y += 6;
        if (init->perso.dir == 2)
            init->perso.pos.x -= 6;
    }
    if (init->perso.pos.x > 544 && init->perso.pos.y < 416) {
        init->perso.move = 0;
        init->perso.pos.y += 6;
    }
    else if (init->perso.pos.x >= 76 && init->perso.pos.x <= 240 &&
    init->perso.pos.y < 350) {
        init->perso.move = 0;
        init->perso.pos.y += 6;
    }
}

void collision_start(struct_t *init)
{
    if (init->perso.pos.x <= 250 && init->perso.pos.x >= 184 &&
    init->perso.pos.y >= 320 && init->perso.pos.y <= 368) {
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
    else if (init->perso.pos.x < 76) {
        init->perso.move = 3;
        init->perso.pos.x += 6;
    }
}

void fnct_three(struct_t *init)
{
    if (init->perso.pos.x <= 526 && init->perso.pos.x >= 424 &&
    init->perso.pos.y <= 446) {
        init->perso.move = init->perso.dir;
        if (init->perso.dir == 0)
            init->perso.pos.y += 6;
        if (init->perso.dir == 2)
            init->perso.pos.x -= 6;
        if (init->perso.dir == 3)
            init->perso.pos.x += 6;
    }
    if (init->perso.pos.x <= 826 && init->perso.pos.x >= 748 &&
    init->perso.pos.y <= 428) {
        init->perso.move = init->perso.dir;
        if (init->perso.dir == 0)
            init->perso.pos.y += 6;
        if (init->perso.dir == 2)
            init->perso.pos.x -= 6;
        if (init->perso.dir == 3)
            init->perso.pos.x += 6;
    }
}

void fnct_four(struct_t *init)
{
    if (init->perso.pos.x <= 400 && init->perso.pos.x >= 298 &&
    init->perso.pos.y >= 446 && init->perso.pos.y <= 512) {
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
    if (init->perso.pos.x <= 526 && init->perso.pos.x >= 322 &&
    init->perso.pos.y >= 536) {
        init->perso.move = init->perso.dir;
        if (init->perso.dir == 1)
            init->perso.pos.y -= 6;
        if (init->perso.dir == 3)
            init->perso.pos.x += 6;
    }
}

void fnct_six(struct_t *init)
{
    if (init->perso.pos.x <= 778 && init->perso.pos.x >= 682 &&
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
    if (init->perso.pos.x >= 376 && init->perso.pos.x <= 418 &&
    init->perso.pos.y < 350) {
        init->perso.move = 0;
        init->perso.pos.y += 6;
    }
    fnct_one(init);
    fnct_three(init);
    fnct_four(init);
}