/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** menu
*/

#include "rpg.h"

sfText *build_font(sfText *text, char *str, int x, int y)
{
    text = sfText_create();
    sfText_setString(text, str);
    sfText_setPosition(text, (sfVector2f) {x, y});
    sfText_setFont(text, sfFont_createFromFile("PNG/font.ttf"));
    sfText_setCharacterSize(text, 50);
    return (text);
}

void init_menu(struct_t *init)
{
    init->play = sfRectangleShape_create();
    sfRectangleShape_setPosition(init->play, (sfVector2f) {20, 20});
    sfRectangleShape_setSize(init->play, (sfVector2f) {20, 30});
    sfRectangleShape_setFillColor(init->play, sfTransparent);
    init->quit = sfRectangleShape_create();
    sfRectangleShape_setPosition(init->quit, (sfVector2f) {40, 40});
    sfRectangleShape_setSize(init->quit, (sfVector2f) {20, 30});
    sfRectangleShape_setFillColor(init->quit, sfTransparent);
    init->settings = sfRectangleShape_create();
    sfRectangleShape_setPosition(init->settings, (sfVector2f) {60, 60});
    sfRectangleShape_setSize(init->settings, (sfVector2f) {20, 30});
    sfRectangleShape_setFillColor(init->settings, sfTransparent);
    init->t_play = build_font(init->t_play, "PLAY", 520, 200);
    init->t_settings = build_font(init->t_settings, "SETTINGS", 520, 400);
    init->t_exit = build_font(init->t_exit, "EXIT", 520, 300);
    init->fontmenu = sfSprite_create();
    sfSprite_setTexture(init->fontmenu,
    sfTexture_createFromFile("PNG/menu.png", NULL), sfTrue);
    sfSprite_setPosition(init->fontmenu, (sfVector2f) {0, 0});
}

void menu_text(struct_t *init)
{
    sfRenderWindow_drawText(init->window, init->t_play, NULL);
    sfRenderWindow_drawText(init->window, init->t_settings, NULL);
    sfRenderWindow_drawText(init->window, init->t_exit, NULL);
    sfRenderWindow_drawRectangleShape(init->window, init->play, NULL);
    sfRenderWindow_drawRectangleShape(init->window, init->settings, NULL);
    sfRenderWindow_drawRectangleShape(init->window, init->quit, NULL);
}

void display_menu(struct_t *init)
{
    sfRenderWindow_drawSprite(init->window, init->fontmenu, NULL);
    menu_text(init);
}

void event_menu(struct_t *init)
{
    if (init->event.type == sfEvtMouseButtonPressed) {
        init->mouse.click =
        sfMouse_getPositionRenderWindow(init->window);
        if (init->mouse.click.x < 670 && init->mouse.click.x > 520
        && init->mouse.click.y < 255 && init->mouse.click.y > 200)
            init->scene = 1;
        if (init->mouse.click.x < 620 && init->mouse.click.x > 520
        && init->mouse.click.y < 355 && init->mouse.click.y > 300)
            sfRenderWindow_close(init->window);
    }
}