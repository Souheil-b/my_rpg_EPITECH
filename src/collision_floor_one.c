/*
** EPITECH PROJECT, 2020
** corewar
** File description:
** collision_floor_one
*/

#include"rpg.h"

void collision_floor_one_bis(struct_t *init)
{
    if (init->perso.pos.x <= 646 && init->perso.pos.x >= 550 &&
    init->perso.pos.y >= 212 && init->perso.pos.y <= 170) {
        init->perso.move = init->perso.dir;
        if (init->perso.dir == 0)
            init->perso.pos.y += 6;
        if (init->perso.dir == 2)
            init->perso.pos.x -= 6;
        else if (init->perso.dir == 3)
            init->perso.pos.x += 6;
    }
    if (init->perso.dir == 1 && init->perso.pos.y >= 296 &&
    init->perso.pos.x >= 442) {
        init->perso.move = 1;
        init->perso.pos.y -= 6;
    }
}

void collision_floor_one(struct_t *init)
{
    if (init->perso.dir == 3 && init->perso.pos.x <= 394) {
        init->perso.move = 3;
        init->perso.pos.x += 6;
    }
    if (init->perso.dir == 2 && init->perso.pos.x >= 802) {
        init->perso.move = 2;
        init->perso.pos.x -= 6;
    }
    if (init->perso.dir == 0 && init->perso.pos.y <= 173) {
        init->perso.move = 0;
        init->perso.pos.y += 6;
    }
    collision_floor_one_bis(init);
}