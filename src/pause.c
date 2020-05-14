/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** event
*/

#include "rpg.h"

void event_pause(struct_t *i)
{
    if (sfKeyboard_isKeyPressed(sfKeyP) == sfTrue)
        i->pause = 1;
    if (i->event.type == sfEvtMouseButtonPressed) {
        i->mouse.click =
        sfMouse_getPositionRenderWindow(i->window);
        if (i->mouse.click.x < 125 && i->mouse.click.x > 50
        && i->mouse.click.y < 115 && i->mouse.click.y > 52)
            i->pause--;
        if (i->mouse.click.x < 765 && i->mouse.click.x > 560
        && i->mouse.click.y < 380 && i->mouse.click.y > 280)
            i->event_pause = 2;
        if (i->mouse.click.x < 740 && i->mouse.click.x > 575
        && i->mouse.click.y < 600 && i->mouse.click.y > 530 &&
        i->pause == 1) {
            i->scene = 0;
            i->pause = 0;
        }
    }
}

void init_pause(struct_t *i)
{
    i->pause_texture = sfTexture_createFromFile("PNG/pause.png", NULL);
    i->pause_sprit = sfSprite_create();
    sfSprite_setTexture(i->pause_sprit, i->pause_texture, sfTrue);
    sfSprite_setPosition(i->pause_sprit, (sfVector2f) {0, 0});
    sfSprite_setScale(i->pause_sprit, (sfVector2f) {0.7, 0.7});
}

void init_help(struct_t *i)
{
    i->help_texture = sfTexture_createFromFile("PNG/help.jpg", NULL);
    i->help_sprit = sfSprite_create();
    sfSprite_setTexture(i->help_sprit, i->help_texture, sfTrue);
    sfSprite_setPosition(i->help_sprit, (sfVector2f) {0, 0});
    sfSprite_setScale(i->help_sprit, (sfVector2f) {0.7, 0.7});
}