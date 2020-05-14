/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** house
*/

#include "rpg.h"

void event_floor_zero(struct_t *init)
{
    if (init->perso.dir == 0 && init->perso.pos.x <= 437
    && init->perso.pos.x >= 400 && init->perso.pos.y >= 85 &&
    init->perso.pos.y <= 90) {
        init->scene = 3;
        init->perso.pos.x = 406;
        init->perso.pos.y = 335;
        sfSprite_setPosition(init->perso.spr, init->perso.pos);
    }
    if (init->perso.dir == 1 && init->perso.pos.x <= 600
    && init->perso.pos.x >= 556 && init->perso.pos.y >= 520 &&
    init->perso.pos.y <= 530) {
        init->scene = 1;
        init->perso.pos.x = 310;
        init->perso.pos.y = 320;
        sfSprite_setPosition(init->perso.spr, init->perso.pos);
    }
}

void event_floor_one(struct_t *init)
{
    if (init->perso.dir == 0 && init->perso.pos.x <= 716
    && init->perso.pos.x >= 676 && init->perso.pos.y >= 170 &&
    init->perso.pos.y <= 180) {
        my_putstr("Door is locked");
        init->perso.move = 0;
        init->perso.pos.y = 188;
        sfSprite_setPosition(init->perso.spr, init->perso.pos);
    }
    if (init->perso.dir == 0 && init->perso.pos.x <= 523
    && init->perso.pos.x >= 483 && init->perso.pos.y >= 174 &&
    init->perso.pos.y <= 180) {
        init->scene = 4;
        init->perso.pos.x = 568;
        init->perso.pos.y = 414;
        sfSprite_setPosition(init->perso.spr, init->perso.pos);
    }
    if (init->perso.dir == 1 && init->perso.pos.x <= 415
    && init->perso.pos.x >= 390 && init->perso.pos.y >= 340 &&
    init->perso.pos.y <= 380)
        event_floor_one_bis(init);
}

void event_room_one(struct_t *init)
{
    if (init->perso.dir == 1 && init->perso.pos.x <= 593
    && init->perso.pos.x >= 550 && init->perso.pos.y >= 430 &&
    init->perso.pos.y <= 445) {
        init->scene = 3;
        init->perso.pos.x = 502;
        init->perso.pos.y = 188;
        sfSprite_setPosition(init->perso.spr, init->perso.pos);
    }
}

void init_rooms(struct_t *init)
{
    init->house.floor_0 = sfSprite_create();
    init->house.floor_1 = sfSprite_create();
    init->house.room_1 = sfSprite_create();
    init->house.room_2 = sfSprite_create();
    sfSprite_setTexture(init->house.floor_0, init->house.text_house, sfTrue);
    sfSprite_setTexture(init->house.floor_1, init->house.text_house, sfTrue);
    sfSprite_setTexture(init->house.room_1, init->house.text_house, sfTrue);
    sfSprite_setTexture(init->house.room_2, init->house.text_house, sfTrue);
    sfSprite_setTextureRect(init->house.floor_0, init->house.rect_1);
    sfSprite_setTextureRect(init->house.floor_1, init->house.rect_2);
    sfSprite_setTextureRect(init->house.room_1, init->house.rect_3);
    sfSprite_setTextureRect(init->house.room_2, init->house.rect_4);
}

void init_house(struct_t *init)
{
    set_rect(init);
    init->house.text_house = sfTexture_createFromFile("PNG/house.png", NULL);
    init_rooms(init);
    init->house.pos.x = 350;
    init->house.pos.y = 85;
    init->house.scale.x = 2;
    init->house.scale.y = 2;
    sfSprite_setScale(init->house.floor_0, init->house.scale);
    sfSprite_setScale(init->house.floor_1, init->house.scale);
    sfSprite_setScale(init->house.room_1, init->house.scale);
    sfSprite_setScale(init->house.room_2, init->house.scale);
    sfSprite_setPosition(init->house.floor_0, init->house.pos);
    sfSprite_setPosition(init->house.floor_1, init->house.pos);
    sfSprite_setPosition(init->house.room_1, init->house.pos);
    sfSprite_setPosition(init->house.room_2, init->house.pos);
}