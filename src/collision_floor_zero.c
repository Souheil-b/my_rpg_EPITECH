/*
** EPITECH PROJECT, 2020
** corewar
** File description:
** collision_floor_zero
*/

#include "rpg.h"

void collision_room_one_bis(struct_t *init)
{
    if (init->perso.dir == 1 && init->perso.pos.y >= 378 &&
    init->perso.pos.x >= 598) {
        init->perso.move = 1;
        init->perso.pos.y -= 6;
    }
    if (init->perso.dir == 1 && init->perso.pos.y >= 378 &&
    init->perso.pos.x <= 538) {
        init->perso.move = 1;
        init->perso.pos.y -= 6;
    }
    if (init->perso.pos.y >= 378 && init->perso.pos.x >= 520 &&
    init->perso.pos.x <= 616) {
        if (init->perso.dir == 2)
            init->perso.move = 2;
        if (init->perso.dir == 3)
            init->perso.move = 3;
    }
}

void coll_floor_z(struct_t *init)
{
    if (init->perso.pos.x <= 706 && init->perso.pos.x >= 598 &&
    init->perso.pos.y >= 191 && init->perso.pos.y <= 341) {
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
    if (init->perso.dir == 3 && init->perso.pos.x <= 394) {
        init->perso.move = 3;
        init->perso.pos.x += 6;
    }
    coll_floor_z_bis(init);
}

void collision_floor_zero(struct_t *init)
{
    if (init->perso.pos.x <= 592 && init->perso.pos.x >= 562 &&
    init->perso.pos.y >= 473) {
        if (init->perso.dir == 2) {
            init->perso.pos.x -= 6;
            init->perso.move = 2;
        }
        else if (init->perso.dir == 3) {
            init->perso.pos.x += 6;
            init->perso.move = 3;
        }
    }
    if (init->perso.dir == 3 && init->perso.pos.x <= 406) {
        init->perso.move = 3;
        init->perso.pos.x += 6;
    }
    coll_floor_z(init);
}

void collision_room_one(struct_t *init)
{
    if (init->perso.dir == 0 && init->perso.pos.y <= 198) {
        init->perso.move = 0;
        init->perso.pos.y += 6;
    }
    if (init->perso.dir == 2 && init->perso.pos.x >= 682 &&
    init->perso.pos.y <= 348) {
        init->perso.move = 2;
        init->perso.pos.x -= 6;
    }
    if (init->perso.dir == 3 && init->perso.pos.x <= 430 &&
    init->perso.pos.y <= 348) {
        init->perso.move = 3;
        init->perso.pos.x += 6;
    }
    if (init->perso.dir == 2 && init->perso.pos.x >= 748) {
        init->perso.move = 2;
        init->perso.pos.x -= 6;
    }
    collision_room_one_bis(init);
}

void coll_floor_z_bis(struct_t *init)
{
    if (init->perso.pos.x <= 556 && init->perso.pos.x >= 496 &&
    init->perso.pos.y >= 191 && init->perso.pos.y <= 293) {
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
    colli_floor_z(init);
}