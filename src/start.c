/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** start
*/

#include "rpg.h"

void init_start(struct_t *init)
{
    init->start.text = sfTexture_createFromFile("PNG/start.png", NULL);
    init->start.spr = sfSprite_create();
    sfSprite_setTexture(init->start.spr, init->start.text, sfTrue);
}

void event_start(struct_t *init)
{
    if (init->perso.dir == 0 && init->perso.pos.x <= 320
    && init->perso.pos.x >= 300 && init->perso.pos.y >= 300 &&
    init->perso.pos.y <= 315) {
        init->scene = 2;
        init->perso.pos.x = 574;
        init->perso.pos.y = 515;
        sfSprite_setPosition(init->perso.spr, init->perso.pos);
    }
    if (sfKeyboard_isKeyPressed(sfKeyE) == sfTrue) {
        if (init->perso.pos.x >= 1040 && init->perso.pos.x <= 1118
        && init->perso.pos.y <= 450 && init->perso.pos.y >= 430)
            my_putstr("Event pancarte");
        else if (init->perso.pos.x <= 840 && init->perso.pos.x >= 734 &&
        init->perso.pos.y <= 440)
            init->scene = 10;
        else
            my_putstr("Nothing to do here\n");
    }
}

void display_start(struct_t *init)
{
    sfRenderWindow_drawSprite(init->window, init->start.spr, NULL);
    sfRenderWindow_drawSprite(init->window, init->perso.spr, NULL);
}