/*
** EPITECH PROJECT, 2019
** Visual Studio Live Share (Workspace)
** File description:
** transition.c
*/

#include "rpg.h"

void init_transi(struct_t *i)
{
    sfVector2f scale;

    i->transi.text_transi = sfTexture_createFromFile("PNG/transi.png", NULL);
    i->transi.spr_transi = sfSprite_create();
    sfSprite_setTexture(i->transi.spr_transi, i->transi.text_transi, sfTrue);
    i->transi.rect_transi.left = 0;
    i->transi.rect_transi.top = 0;
    i->transi.rect_transi.width = 480;
    i->transi.rect_transi.height = 270;
    sfSprite_setTextureRect(i->transi.spr_transi, i->transi.rect_transi);
    scale.x = 2.7;
    scale.y = 2.6;
    sfSprite_setScale(i->transi.spr_transi, scale);
}

void event_combat(struct_t *init)
{
    if (sfKeyboard_isKeyPressed(sfKeyA) == sfTrue) {
        sfRenderWindow_drawText(init->window, init->sucess, NULL);
        init->scene = 1;
    }
}

void init_combat(struct_t *init)
{
    init->combat = sfText_create();
    sfText_setString(init->combat, "Alors comme ca tu veux ton deguisement ?");
    sfText_setPosition(init->combat, (sfVector2f) {420, 500});
    sfText_setFont(init->combat, sfFont_createFromFile("PNG/pixelated.ttf"));
    sfText_setCharacterSize(init->combat, 40);
    init->instru = sfText_create();
    sfText_setString(init->instru,
    "Appuyez sur A pour lui reprendre violemment !");
    sfText_setPosition(init->instru, (sfVector2f) {310, 410});
    sfText_setFont(init->instru, sfFont_createFromFile("PNG/pixelated.ttf"));
    sfText_setCharacterSize(init->instru, 30);
    init->sucess = sfText_create();
    sfText_setString(init->sucess,
    "Bravo vous avez repris votre déguisement !");
    sfText_setPosition(init->sucess, (sfVector2f) {330, 450});
    sfText_setFont(init->sucess, sfFont_createFromFile("PNG/pixelated.ttf"));
    sfText_setCharacterSize(init->sucess, 40);
}

void display_combat(struct_t *init)
{
    sfRenderWindow_drawText(init->window, init->combat, NULL);
    sfRenderWindow_drawText(init->window, init->instru, NULL);
}

int display_transi(struct_t *i)
{
    i->transi.rect_transi.left += 8;
    if (i->transi.rect_transi.left >= 13934)
        display_combat(i);
    if (i->transi.rect_transi.left % 480 == 0)
        sfSprite_setTextureRect(i->transi.spr_transi, i->transi.rect_transi);
    sfRenderWindow_drawSprite(i->window, i->transi.spr_transi, NULL);
}
