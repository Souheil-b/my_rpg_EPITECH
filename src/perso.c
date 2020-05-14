/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** perso
*/

#include "rpg.h"

void move_perso_left(struct_t *init)
{
    init->perso.text = sfTexture_createFromFile("PNG/left.png", NULL);
    sfSprite_setTexture(init->perso.spr, init->perso.text, sfTrue);
    init->perso.rect.left += 16;
    init->perso.pos.x -= 6;
    if (init->perso.rect.left >= 32)
        init->perso.rect.left = 0;
    sfSprite_setTextureRect(init->perso.spr, init->perso.rect);
    sfSprite_setPosition(init->perso.spr, init->perso.pos);
    init->perso.dir = 3;
    init->perso.move = -1;
}

void move_perso_behind(struct_t *init)
{
    init->perso.text = sfTexture_createFromFile("PNG/behind.png", NULL);
        sfSprite_setTexture(init->perso.spr, init->perso.text, sfTrue);
        init->perso.rect.left += 16;
        init->perso.pos.y -= 6;
        if (init->perso.rect.left >= 32)
            init->perso.rect.left = 0;
        sfSprite_setTextureRect(init->perso.spr, init->perso.rect);
        sfSprite_setPosition(init->perso.spr, init->perso.pos);
        init->perso.dir = 0;
        init->perso.move = -1;
}

void move_perso_forward(struct_t *i)
{
    i->perso.text = sfTexture_createFromFile("PNG/forward.png", NULL);
        sfSprite_setTexture(i->perso.spr, i->perso.text, sfTrue);
        i->perso.rect.left += 16;
        i->perso.pos.y += 6;
        if (i->perso.rect.left >= 32)
            i->perso.rect.left = 0;
        sfSprite_setTextureRect(i->perso.spr, i->perso.rect);
        sfSprite_setPosition(i->perso.spr, i->perso.pos);
        i->perso.dir = 1;
        i->perso.move = -1;
}

void move_perso_right(struct_t *i)
{
    i->perso.text = sfTexture_createFromFile("PNG/right.png", NULL);
        sfSprite_setTexture(i->perso.spr, i->perso.text, sfTrue);
        i->perso.rect.left += 16;
        i->perso.pos.x += 6;
        if (i->perso.rect.left >= 32)
            i->perso.rect.left = 0;
        sfSprite_setTextureRect(i->perso.spr, i->perso.rect);
        sfSprite_setPosition(i->perso.spr, i->perso.pos);
        i->perso.dir = 2;
        i->perso.move = -1;
}