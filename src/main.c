/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** thibault
*/

#include "rpg.h"

void init_window(struct_t *init)
{
    sfVideoMode mode = {1270, 700, 32};
    init->window = sfRenderWindow_create(mode, "my_rpg",
    sfResize | sfClose, NULL);
    init->scene = 0;
    init->prompt = 0;
    init->perso.move = -1;
}

void init_all(struct_t *init)
{
    init_window(init);
    init_start(init);
    init_perso(init);
    init_menu(init);
    init_house(init);
    init_game(init);
    init_pause(init);
    init_help(init);
    init_transi(init);
    init_combat(init);
}

void analyze_event(struct_t *init)
{
    while (sfRenderWindow_pollEvent(init->window, &init->event)) {
        if (init->event.type == sfEvtClosed)
            sfRenderWindow_close(init->window);
        if (init->scene == 0)
            event_menu(init);
        if (init->scene > 0) {
            move_perso(init);
            event_pause(init);
            if (init->scene == 1)
                event_start(init);
            if (init->scene == 2)
                event_floor_zero(init);
            if (init->scene == 3)
                event_floor_one(init);
            if (init->scene == 4)
                event_room_one(init);
            if (init->scene == 10)
                event_combat(init);
        }
    }
}

int main(int ac, char **av)
{
    struct_t init;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        my_putstr("Check help in the pause in game by pressing P\n");
    else {
        init_all(&init);
        while (sfRenderWindow_isOpen(init.window)) {
            sfRenderWindow_clear(init.window, sfBlack);
            analyze_event(&init);
            game(&init);
            sfRenderWindow_display(init.window);
        }
    }
}
