/*
** EPITECH PROJECT, 2020
** norme
** File description:
** init_perso
*/

#include "rpg.h"

void init_perso(struct_t *init)
{
    init->perso.text = sfTexture_createFromFile("PNG/perso.png", NULL);
    init->perso.spr = sfSprite_create();
    sfSprite_setTexture(init->perso.spr, init->perso.text, sfTrue);
    init->perso.clock = sfClock_create();
    init->perso.scale.x = 2;
    init->perso.scale.y = 2;
    sfSprite_setScale(init->perso.spr, init->perso.scale);
    init->perso.rect.left = 16;
    init->perso.rect.top = 0;
    init->perso.rect.width = 16;
    init->perso.rect.height = 25;
    sfSprite_setTextureRect(init->perso.spr, init->perso.rect);
    init->perso.pos.x = 220;
    init->perso.pos.y = 404;
    sfSprite_setPosition(init->perso.spr, init->perso.pos);
}

void move_perso(struct_t *i)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue && i->perso.move != 3)
        move_perso_left(i);
    if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue && i->perso.move != 0)
        move_perso_behind(i);
    if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue && i->perso.move != 2)
        move_perso_right(i);
    if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue && i->perso.move != 1)
        move_perso_forward(i);
}