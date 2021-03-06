/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** all prototypes.
*/

#ifndef MY_H
#define MY_H

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct my_struct_s {
    int a;
    int b;
    int c;
    int k;
    int ni;
    int ni2;
    int miss;
    int hud2;
    int yes;
    int yes2;
    int collision_droite;
    int collision_gauche;
    int collision_haut;
    int check1;
    int check2;
    int collision_bas;
    int quest1_check;
    int mainquest;
    int mainquest2;
    int status;
    int play_status;
    int play_status2;
    int mainquest_accept;
    int nw_status;
    int intero1;
    int link_attacking;
    int zone;
    int kalash_status;
    int salut;
    int sword;
    int snipe;
    int snipe2;
    int boss_door;
    int right_door;
    int boss_key;
    int boss_key2;
    int memet_life;
    int lives;
    int seb_int;
    sfRenderWindow *window;
    sfEvent events;
    sfIntRect rect_enemy;
    sfIntRect rect_link;
    sfIntRect rect_woodampli;
    sfIntRect rect_sol;
    sfIntRect rect_wood;
    sfIntRect rect_brokenwood;
    sfIntRect rect_wind;
    sfRectangleShape *rectangle;
    sfMusic *menu_zik;
    sfMusic *salam_song;
    sfMusic *explication_ak;
    sfMusic *tir_ak;
    sfMusic *ban_zik;
    sfMusic *attack_sword_zik;
    sfMusic *je_suis_chaud_zik;
    sfMusic *je_suis_fatigue_zik;
    sfMusic *boss_zik;
    sfMusic *ville_zik;
    sfMusic *open_chest_zik;
    sfMusic *talking_zik;
    sfMusic *attack_intervention_zik;
    sfVector2i mouse_position;
    sfVector2f link_attack_pos;
    sfVector2f interaction_pos;
    sfVector2f npcmage_position;
    sfVector2f map_collision;
    sfVector2f map_ville_position;
    sfVector2f link_position;
    sfVector2f memet_position;
    sfVector2f npc1_position;
    sfVector2f seb_position;
    sfVector2f npcamir_position;
    sfVector2f wind_position;
    sfVector2f quest1_position;
    sfVector2f makroute_zoom;
    sfVector2f chest_image_position;
    sfVector2f kalash_position;
    sfVector2f leaf_position;
    sfVector2f enemy1_position;
    sfVector2f enemy2_position;
    sfIntRect rect_backgrond_4;
    sfClock *clock_link_attack;
    sfClock *clock_background_4;
    sfClock *clock_wind;
    sfClock *clock_menu2;
    sfClock *clock_menu1;
    sfClock *clock_menu3;
    sfClock *clock_link;
    sfClock *clock_test;
    sfClock *clock_chest;
    sfClock *clock_e_button;
    sfClock *clock_enemy;
    sfClock *clock_touched;
    sfClock *clock_ban;
    sfClock *clock_ban2;
    sfText *txt_highest_score;
    sfFont *font;
    sfImage *image_down;
    sfImage *image_top;
    sfImage *image_left;
    sfImage *image_right_close;
    sfImage *image_right_open;
    sfImage *image_boss;
    sfImage *image;
    sfColor perso_color_droite;
    sfColor perso_color_gauche;
    sfColor perso_color_haut;
    sfColor perso_color_bas;
    sfTexture *texture_salle_boss;
    sfTexture *texture_kalashquest2;
    sfTexture *texture_hud2;
    sfTexture *texture_kalashquest;
    sfTexture *texture_interaction;
    sfTexture *settings_screen;
    sfTexture *texture_settings_button;
    sfTexture *texture_endalternative;
    sfTexture *texture_memet;
    sfTexture *texture_seb;
    sfTexture *texture_dialo_seb;
    sfTexture *texture_npcmage;
    sfTexture *texture_nwbutton;
    sfTexture *texture_playbutton;
    sfTexture *texture_hudsnipe;
    sfTexture *texture_dialogue_seb;
    sfTexture *texture_menuscreen1;
    sfTexture *texture_mainquest;
    sfTexture *texture_diak;
    sfTexture *test;
    sfTexture *link_attack;
    sfTexture *link_run_down;
    sfTexture *link_run_top;
    sfTexture *link_run_left;
    sfTexture *link_run_right;
    sfTexture *link_idle_down;
    sfTexture *link_idle_top;
    sfTexture *link_idle_left;
    sfTexture *link_idle_right;
    sfTexture *texture_questhud;
    sfTexture *texture_wood;
    sfTexture *texture_cinematique1;
    sfTexture *texture_menuscreen2;
    sfTexture *texture_woodampli;
    sfTexture *texture_background;
    sfTexture *texture_sol;
    sfTexture *texture_brokenwood;
    sfTexture *texture_hudsword;
    sfTexture *texture_quest1;
    sfTexture *texture_npc1;
    sfTexture *texture_npcamir;
    sfTexture *map_ville1;
    sfTexture *map_ville2;
    sfTexture *map_ville3;
    sfTexture *map_labyrinthe1;
    sfTexture *map_labyrinthe2;
    sfTexture *map_right1;
    sfTexture *map_right2;
    sfTexture *map_right3;
    sfTexture *map_boss;
    sfTexture *texture_wind;
    sfTexture *map_zone1;
    sfTexture *map_zone2;
    sfTexture *map_zone3;
    sfTexture *map_zone4;
    sfTexture *texture_hud1;
    sfTexture *texture_leaf;
    sfTexture *texture_e_button;
    sfTexture *texture_e_button_pushed;
    sfTexture *texture_enemy_left;
    sfTexture *texture_enemy_right;
    sfTexture *texture_image_chest;
    sfTexture *texture_one_heart;
    sfTexture *texture_two_hearts;
    sfTexture *texture_three_hearts;
    sfTexture *texture_ban_chat3;
    sfTexture *texture_ban_chat2;
    sfTexture *texture_ban_chat1;
    sfTexture *texture_minimap;
    sfSprite *sprite_ban_chat;
    sfSprite *sprite_minimap;
    sfSprite *sprite_hearts;
    sfSprite *sprite_image_chest;
    sfSprite *sprite_enemy1;
    sfSprite *sprite_enemy2;
    sfSprite *sprite_seb;
    sfSprite *sprite_dialo_seb;
    sfSprite *sprite_e_button;
    sfSprite *sprite_questhud1;
    sfSprite *sprite_dialogue_seb;
    sfSprite *sprite_memet;
    sfSprite *sprite_hud2;
    sfSprite *sprite_hudsnipe;
    sfSprite *sprite_kalashquest2;
    sfSprite *sprite_hud1;
    sfSprite *sprite_interaction;
    sfSprite *sprite_settingscreen;
    sfSprite *sprite_options_button;
    sfSprite *sprite_endalternative;
    sfSprite *sprite_npcmage;
    sfSprite *sprite_diak;
    sfSprite *sprite_test;
    sfSprite *sprite_leaf;
    sfSprite *sprite_kalashquest;
    sfSprite *sprite_cinematique1;
    sfSprite *sprite_nwbutton;
    sfSprite *sprite_menuscreen1;
    sfSprite *sprite_menuscreen2;
    sfSprite *sprite_mainquest;
    sfSprite *sprite_brokenwood;
    sfSprite *sprite_quest1;
    sfSprite *sprite_hudsword;
    sfSprite *sprite_sol;
    sfSprite *link_sprite;
    sfSprite *link_attack_sprite;
    sfSprite *sprite_wood;
    sfSprite *sprite_playbutton;
    sfSprite *sprite_npc1;
    sfSprite *sprite_npcamir;
    sfSprite *sprite_background;
    sfSprite *sprite_wind;
    sfSprite *sprite_woodampli;
    sfSprite *map_ville_sprite;
    sfSprite *map_zone1_sprite;
    sfSprite *map_zone2_sprite;
    sfSprite *map_zone3_sprite;
    sfSprite *map_zone4_sprite;
} my_t;

void destroy_function(my_t *rpg);
void events(my_t *rpg);
void setup(my_t *rpg);
void variable_affectation(my_t *rpg);
void colision_fonction(my_t *rpg);
void npc_fonction(my_t *rpg);
void menu(my_t *rpg);
void clock_menu(my_t *rpg);
void game_fonction(my_t *rpg);
void menu2(my_t *rpg);
void menu3(my_t *rpg);
void fonction_mainquest(my_t *rpg);
void cinematique(my_t *rpg);

#endif