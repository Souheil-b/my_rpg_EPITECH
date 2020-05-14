/*
** EPITECH PROJECT, 2020
** norme
** File description:
** house_bis
*/

#include "rpg.h"

void display_house(struct_t *init)
{
    if (init->scene == 2) {
        sfRenderWindow_drawSprite(init->window, init->house.floor_0, NULL);
        sfRenderWindow_drawSprite(init->window, init->perso.spr, NULL);
    }
    if (init->scene == 3) {
        sfRenderWindow_drawSprite(init->window, init->house.floor_1, NULL);
        sfRenderWindow_drawSprite(init->window, init->perso.spr, NULL);
    }
    if (init->scene == 4) {
        sfRenderWindow_drawSprite(init->window, init->house.room_1, NULL);
        sfRenderWindow_drawSprite(init->window, init->perso.spr, NULL);
    }
    display_house_bis(init);
}

void display_house_bis(struct_t *init)
{
    if (init->scene == 5) {
        sfRenderWindow_drawSprite(init->window, init->house.room_2, NULL);
        sfRenderWindow_drawSprite(init->window, init->perso.spr, NULL);
    }
}

void event_floor_one_bis(struct_t *init)
{
    init->scene = 2;
    init->perso.pos.x = 424;
    init->perso.pos.y = 92;
    sfSprite_setPosition(init->perso.spr, init->perso.pos);
}

void set_rect(struct_t *init)
{
    init->house.rect_1.left = 733;
    init->house.rect_1.top = 2;
    init->house.rect_1.width = 300;
    init->house.rect_1.height = 262;
    init->house.rect_2.left = 469;
    init->house.rect_2.top = 2;
    init->house.rect_2.width = 262;
    init->house.rect_2.height = 178;
    init->house.rect_3.left = 235;
    init->house.rect_3.top = 2;
    init->house.rect_3.width = 233;
    init->house.rect_3.height = 219;
    init->house.rect_4.left = 1;
    init->house.rect_4.top = 2;
    init->house.rect_4.width = 233;
    init->house.rect_4.height = 219;
}