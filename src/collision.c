/*
** EPITECH PROJECT, 2020
** corewar
** File description:
** collision
*/

#include "rpg.h"

void collision_zero_bis(struct_t *init)
{
    if (init->perso.dir == 0 && init->perso.pos.y >= 217 &&
    init->perso.pos.y <= 229 && init->perso.pos.x >= 814) {
        init->perso.move = 0;
        init->perso.pos.y += 6;
    }
    if (init->perso.dir == 2 && init->perso.pos.y >= 217 &&
    init->perso.pos.y <= 335 && init->perso.pos.x >= 850) {
        init->perso.move = 2;
        init->perso.pos.x -= 6;
    }
    if (init->perso.dir == 1 && init->perso.pos.y >= 467 &&
    init->perso.pos.x <= 550) {
        init->perso.move = 1;
        init->perso.pos.y -= 6;
    }
    if (init->perso.dir == 1 && init->perso.pos.y >= 467 &&
    init->perso.pos.x >= 604) {
        init->perso.move = 1;
        init->perso.pos.y -= 6;
    }
}

void collision_zero(struct_t *init)
{
    if (init->perso.dir == 2 && init->perso.pos.x >= 880) {
        init->perso.move = 2;
        init->perso.pos.x -= 6;
    }
    if (init->perso.pos.x <= 814 && init->perso.pos.x >= 760 &&
    init->perso.pos.y >= 149 && init->perso.pos.y <= 293) {
        init->perso.move = init->perso.dir;
        if (init->perso.dir == 0)
            init->perso.pos.y += 6;
        if (init->perso.dir == 2)
            init->perso.pos.x -= 6;
        if (init->perso.dir == 3)
            init->perso.pos.x += 6;
    }
    collision_zero_bis(init);
}

void colli_floor_z_bis(struct_t *init)
{
    if (init->perso.pos.x <= 808 && init->perso.pos.x >= 724 &&
    init->perso.pos.y >= 185 && init->perso.pos.y <= 251) {
        init->perso.move = init->perso.dir;
        if (init->perso.dir == 0)
            init->perso.pos.y += 6;
        if (init->perso.dir == 1)
            init->perso.pos.y -= 6;
        if (init->perso.dir == 2)
            init->perso.pos.x -= 6;
    }
    if (init->perso.pos.x <= 880 && init->perso.pos.x >= 844 &&
    init->perso.pos.y >= 359 && init->perso.pos.y <= 473) {
        init->perso.move = init->perso.dir;
        if (init->perso.dir == 1)
            init->perso.pos.y -= 6;
        if (init->perso.dir == 2)
            init->perso.pos.x -= 6;
    }
    collision_zero(init);
}

void colli_floor_z(struct_t *init)
{
    if (init->perso.pos.x <= 472 && init->perso.pos.x >= 436 &&
    init->perso.pos.y <= 287 && init->perso.pos.y >= 101) {
        init->perso.move = init->perso.dir;
        if (init->perso.dir == 0)
            init->perso.pos.y += 6;
        if (init->perso.dir == 3)
            init->perso.pos.x += 6;
        if (init->perso.dir == 2)
            init->perso.pos.x -= 6;
    }
    if (init->perso.dir == 0 && init->perso.pos.y <= 149 &&
    init->perso.pos.x >= 514) {
        init->perso.move = 0;
        init->perso.pos.y += 6;
    }
    colli_floor_z_bis(init);
}

void collision_house(struct_t *init)
{
    if (init->scene == 2)
        collision_floor_zero(init);
    if (init->scene == 3)
        collision_floor_one(init);
    if (init->scene == 4)
        collision_room_one(init);
}