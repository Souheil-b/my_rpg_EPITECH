/*
** EPITECH PROJECT, 2020
** include
** File description:
** defender
*/

#ifndef RPG_H_
#define RPG_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>

typedef struct house
{
    sfTexture *text_house;
    sfSprite *floor_0;
    sfSprite *floor_1;
    sfSprite *room_1;
    sfSprite *room_2;
    sfIntRect rect_1;
    sfIntRect rect_2;
    sfIntRect rect_3;
    sfIntRect rect_4;
    sfVector2f pos;
    sfVector2f scale;
}house_t;

typedef struct game
{
    sfTexture *text_prompt;
    sfSprite *spr_prompt;
    sfVector2f pos_prompt;
    sfMusic *music;
}game_t;

typedef struct perso
{
    sfTexture *text;
    sfSprite *spr;
    sfClock *clock;
    sfVector2f scale;
    sfIntRect rect;
    sfVector2f pos;
    int dir;
    int move;
}perso_t;

// typedef struct end
// {
//     sfTexture *text_screen;
//     sfSprite *screen;
// }end_t;

typedef struct mouse
{
    sfVector2i click;
    sfVector2i pos;
    sfTexture *text_target;
    sfSprite *spr_target;
    sfVector2f pos_target;
}mouse_t;

typedef struct start
{
    sfTexture *text;
    sfSprite *spr;
    sfMusic *music;
}start_t;

typedef struct transi
{
    sfSprite *spr_transi;
    sfTexture *text_transi;
    sfIntRect rect_transi;
    sfClock *clock_transi;
}transi_t;

typedef struct init
{
    sfRenderWindow *window;
    sfEvent event;
    int scene;
    int prompt;
    int inventory;
    int pause;
    int event_pause;
    sfRectangleShape *play;
    sfRectangleShape *quit;
    sfRectangleShape *settings;
    sfSprite *fontmenu;
    sfSprite *fontsetting;
    sfSprite *pause_sprit;
    sfSprite *help_sprit;
    sfText *t_play;
    sfText *t_settings;
    sfText *t_exit;
    sfTexture *text_menu;
    sfTexture *help_texture;
    sfTexture *pause_texture;
    perso_t perso;
    start_t start;
    mouse_t mouse;
    house_t house;
    game_t game;
    transi_t transi;
    sfText *combat;
    sfText *instru;
    sfText *sucess;
}struct_t;

void my_putstr(char const *str);

// TRANSITION POKEMON LIKE //

void init_transi(struct_t *i);
int display_transi (struct_t *i);

// HOUSE //

void event_floor_zero(struct_t *init);
void event_floor_one(struct_t *init);
void event_room_one(struct_t *init);
void init_rooms(struct_t *init);
void init_house(struct_t *init);
void collision_house(struct_t *init);
void colli_floor_z(struct_t *init);
void collision_floor_zero(struct_t *init);
void collision_floor_one(struct_t *init);
void collision_room_one(struct_t *init);
void coll_floor_z_bis(struct_t *init);
void coll_floor_z(struct_t *init);

// HOUSE_BIS //

void display_house(struct_t *init);
void display_house_bis(struct_t *init);
void event_floor_one_bis(struct_t *init);
void set_rect(struct_t *init);

// INIT_PERSO //

void init_perso(struct_t *init);
void move_perso(struct_t *i);

// PERSO //

void move_perso_left(struct_t *init);
void move_perso_behind(struct_t *init);
void move_perso_forward(struct_t *i);
void move_perso_right(struct_t *i);

// MENU //

void init_menu(struct_t *init);
void menu_text(struct_t *init);
void display_menu(struct_t *init);
void event_menu(struct_t *init);

// START //

void init_start(struct_t *init);
void display_start(struct_t *init);
void event_start(struct_t *init);
void collision_start(struct_t *init);
void fnct_five(struct_t *init);
void fnct_six(struct_t *init);
void fnct_sev(struct_t *init);

// EVENT //
void event_pause(struct_t *i);
void init_pause(struct_t *i);
void init_help(struct_t *i);

// GAME //

void game(struct_t *init);
void init_game(struct_t *init);

// COMBAT //
void init_combat(struct_t *init);
void event_combat(struct_t *init);

#endif /* RPG_H_ */
