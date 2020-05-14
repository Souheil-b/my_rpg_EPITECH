/*
** EPITECH PROJECT, 2020
** corewar
** File description:
** game
*/

#include "rpg.h"

void init_game(struct_t *init)
{
    sfVector2f scale;

    init->game.text_prompt = sfTexture_createFromFile("PNG/prompt.png", NULL);
    init->game.spr_prompt = sfSprite_create();
    sfSprite_setTexture(init->game.spr_prompt, init->game.text_prompt, sfTrue);
    init->game.pos_prompt.x = 400;
    init->game.pos_prompt.y = 500;
    sfSprite_setPosition(init->game.spr_prompt, init->game.pos_prompt);
    scale.x = 1.5;
    scale.y = 1;
    sfSprite_setScale(init->game.spr_prompt, scale);
}

void game(struct_t *init)
{
    if (init->scene > 1) {
        display_house(init);
        collision_house(init);
    } else if (init->scene == 0)
        display_menu(init);
    if (init->scene == 1) {
        display_start(init);
        collision_start(init);
        fnct_six(init);
        fnct_sev(init);
    }
    if (init->scene == 10) {
        display_start(init);
        display_transi(init);
    }
    if (init->pause == 1) {
        sfRenderWindow_drawSprite(init->window, init->pause_sprit, NULL);
        if (init->event_pause == 2)
            sfRenderWindow_drawSprite(init->window, init->help_sprit, NULL);
    }
}