#include "graphics.h"
#include "map.h"
#include <game.h>

Map level_1 = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xc0, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00,
    0x01, 0xfc, 0x7f, 0xc0, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x7f, 0xc0, 0x00, 0x00,
    0xff, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x7f, 0xc0, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xfc,
    0x7f, 0xc0, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x7f, 0xc0, 0x00, 0x00, 0xff, 0xfc,
    0x00, 0x00, 0x01, 0xfc, 0x7f, 0xc0, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x7f, 0xc0,
    0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x7f, 0xc0, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00,
    0x01, 0xfc, 0x7f, 0xc0, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x7f, 0xc0, 0x00, 0x00,
    0xff, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x7f, 0xc0, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xfc,
    0x7f, 0xc0, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00
};

Map level_2 = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x03, 0xff, 0x00, 0x7f, 0xc0, 0x1f, 0xfc,
    0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x7f, 0xc0, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00,
    0x7f, 0xc0, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x7f, 0xc0, 0x1f, 0xfc, 0x00, 0x00,
    0x00, 0x03, 0xc3, 0x00, 0x7f, 0xc0, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x03, 0xc3, 0x00, 0x7f, 0xc0,
    0x18, 0x3c, 0x00, 0x00, 0x00, 0x03, 0xc3, 0x00, 0x7f, 0xc0, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x03,
    0xc3, 0x00, 0x7f, 0xc0, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x03, 0xc3, 0x00, 0x7f, 0xc0, 0x18, 0x3c,
    0x00, 0x00, 0x00, 0x03, 0xc3, 0x00, 0x7f, 0xc0, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x03, 0xc3, 0x00,
    0x7f, 0xc0, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x03, 0xc3, 0xff, 0xff, 0xff, 0xf8, 0x3c, 0x00, 0x00,
    0x00, 0x03, 0xc3, 0xff, 0xc0, 0x7f, 0xf8, 0x3c, 0x00, 0x00, 0x00, 0x03, 0xc3, 0xff, 0xc0, 0x7f,
    0xf8, 0x3c, 0x00, 0x00, 0x00, 0x03, 0xc3, 0xff, 0xc0, 0x7f, 0xf8, 0x3c, 0x00, 0x00, 0x00, 0x03,
    0xc3, 0xff, 0xc0, 0x7f, 0xf8, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00
};

Map level_3 = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0x1f, 0xff, 0xff,
    0xff, 0x00, 0x7f, 0xfe, 0x7f, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xfe, 0x7f, 0xff,
    0xc0, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xfe, 0x7f, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x00,
    0x7f, 0xfe, 0x7f, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xfe, 0x00, 0x01, 0xc0, 0x1f,
    0xff, 0xff, 0xff, 0x00, 0x70, 0x00, 0x00, 0x01, 0xc0, 0x18, 0x00, 0x40, 0x03, 0x00, 0x70, 0x00,
    0x00, 0x01, 0xc0, 0x18, 0x00, 0x40, 0x03, 0x00, 0x70, 0x00, 0x00, 0x01, 0xff, 0xf8, 0x00, 0x40,
    0x03, 0xff, 0xf0, 0x00, 0x00, 0x01, 0xff, 0xf8, 0x00, 0x40, 0x03, 0xff, 0xf0, 0x00, 0x00, 0x01,
    0xff, 0xf8, 0x00, 0x40, 0x03, 0xff, 0xf0, 0x00, 0x00, 0x01, 0xc0, 0x18, 0x00, 0x40, 0x03, 0x00,
    0x70, 0x00, 0x00, 0x01, 0xc0, 0x18, 0x00, 0x40, 0x03, 0x00, 0x70, 0x00, 0x7f, 0xff, 0xc0, 0x1f,
    0xff, 0xff, 0xff, 0x00, 0x7f, 0xfe, 0x7f, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xfe,
    0x7f, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xfe, 0x7f, 0xff, 0xc0, 0x1f, 0xff, 0xff,
    0xff, 0x00, 0x7f, 0xfe, 0x7f, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xfe, 0x7f, 0xff,
    0xc0, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00
};

unsigned char *levels[NUM_LEVELS] = {level_1, level_2, level_3};

struct game* game_new(int diff) {
    if (diff < 0) return 0;

    struct game* game = (struct game*)dyn_mem(sizeof(struct game));

    game->score = 0;
    game->level = 0;
    game->should_exit = 0;
    mutex_init(&game->mutex);

    // bigger diff, less lives.
    game->lives = 6 - (diff/2);
    if (game->lives < 1) game->lives = 1;

    // bigger diff, more manzanitas.
    int num_manzanitas = 3 + (diff * 2);
    game->num_manzanitas = num_manzanitas;
    game->manzanitas_left = num_manzanitas;
    game->manzanitas = (struct object*)dyn_mem(sizeof(struct object) * num_manzanitas);

    // init manzanitas position
    for (int i = 0; i < num_manzanitas; i++) game_move_manzanita_random(game, i);

    // init player position
    game_move_player_random(game);

    return game;
}

void game_loop(struct game* game) {
    g_erase_screen();


    map_draw(levels[game->level]);

    int last_score = -1; 
    int last_lives = -1;
    int last_level = -1;

    char needs_redraw = 1;

    create_thread((void*)game_process_input, game);

    while (!game->should_exit) {
        if (needs_redraw) game_draw(game);

        game_process_collisions(game);

        if (game->manzanitas_left <= 0) game_advance_level(game);

        needs_redraw = (last_score != game->score) || (last_lives != game->lives) || (last_level != game->level);

        last_score = game->score;
        last_lives = game->lives;
        last_level = game->level;

        game->should_exit = game_should_exit(game);
    }

    g_erase_screen();

    // g_draw_line('a', 10, 10, 20, 25, GREEN, GREEN);
    write_wrapper("GAME OVER\n");

    if (game->lives <= 0) {
        write_wrapper("You lost all your lives!\n");
    } else {
        write_wrapper("You won!\n");
    }
}

// --------------------------------------------------------

void game_draw(struct game *game) {
    char buffer[] = "\[0;1H Score:00";
    buffer[12] = '0' + (game->score / 10);
    buffer[13] = '0' + (game->score % 10);
    write(1, buffer, strlen(buffer));

    char buffer2[] = "\[20;1H Lives:00";
    buffer2[13] = '0' + (game->lives / 10);
    buffer2[14] = '0' + (game->lives % 10);
    write(1, buffer2, strlen(buffer2));

    char buffer4[] = "\[60;1H Level:00";
    buffer4[13] = '0' + (game->level / 10);
    buffer4[14] = '0' + (game->level % 10);
    write(1, buffer4, strlen(buffer4));
}

void game_draw_objects(struct game* game) {
    g_draw_xy(PLAYER_CHAR, game->player.x+MAP_X_OFFSET, game->player.y+MAP_Y_OFFSET, BLACK, YELLOW);

    for (int i = 0; i < game->num_manzanitas; ++i) {
        if (game->manzanitas[i].x >= 0 && game->manzanitas[i].y >= 0) {
            g_draw_xy(MANZANITA_CHAR, game->manzanitas[i].x+MAP_X_OFFSET, game->manzanitas[i].y+MAP_Y_OFFSET, BLACK, BLACK);
        }
    }
}

int game_should_exit(struct game* game) {
    if (game->lives <= 0) return 1;
    if (game->level >= NUM_LEVELS) return 1;

    return 0;
}

void game_advance_level(struct game* game) {
    game->level++;
    game->manzanitas_left = game->num_manzanitas;
    for (int i = 0; i < game->num_manzanitas; i++) game_move_manzanita_random(game, i);
    game_move_player_random(game);

    if (game->level >= NUM_LEVELS) {
        game->should_exit = 1;
        return;
    }

    map_draw(levels[game->level]);
    game_draw_objects(game);
}

char game_is_wall(struct game* game, int x, int y) {
    if (game->level >= NUM_LEVELS) {
        game->should_exit = 1;
        return 1;
    }

    return map_is_wall(levels[game->level], x, y);
}

int game_is_manzanita(struct game* game, int x, int y, int manzanita) {
    for (int i = 0; i < game->num_manzanitas; i++) {
        if (i == manzanita) continue;
        if (game->manzanitas[i].x == x && game->manzanitas[i].y == y) {
            return i;
        }
    }

    return -1;
}

void game_process_input(struct game *game) {
    char c;

    while (!game->should_exit) {
        game_draw_objects(game);

        read(&c, 1);

        switch (c) {
            case 'w':
                game_move_player_up(game);
                break;
            case 'a':
                game_move_player_left(game);
                break;
            case 's':
                game_move_player_down(game);
                break;
            case 'd':
                game_move_player_right(game);
                break;
            default:
                break;
        }

    }

    exit_thread();
}

void game_process_collisions(struct game* game) {
    if (game_is_wall(game, game->player.x, game->player.y)) {
        game->lives--;
        map_draw(levels[game->level]);
        game_move_player_random(game);
        game_draw_objects(game);
        return;
    }

    int manzanita = game_is_manzanita(game, game->player.x, game->player.y, -1);
    if (manzanita == -1) return;

    game->score++;
    if (game->score > 99) game->score = 99;
    game->manzanitas_left--;
    game->manzanitas[manzanita].x = -1;
    game->manzanitas[manzanita].y = -1;
    game_draw_objects(game);
}

void game_move_player_left(struct game* game) {
    mutex_lock(&game->mutex);
    g_erase_xy(game->player.x+MAP_X_OFFSET, game->player.y+MAP_Y_OFFSET);
    game->player.x--;
    mutex_unlock(&game->mutex);
}

void game_move_player_right(struct game* game) {
    mutex_lock(&game->mutex);
    g_erase_xy(game->player.x+MAP_X_OFFSET, game->player.y+MAP_Y_OFFSET);
    game->player.x++;
    mutex_unlock(&game->mutex);
}

void game_move_player_up(struct game* game) {
    mutex_lock(&game->mutex);
    g_erase_xy(game->player.x+MAP_X_OFFSET, game->player.y+MAP_Y_OFFSET);
    game->player.y--;
    mutex_unlock(&game->mutex);
}

void game_move_player_down(struct game* game) {
    mutex_lock(&game->mutex);
    g_erase_xy(game->player.x+MAP_X_OFFSET, game->player.y+MAP_Y_OFFSET);
    game->player.y++;
    mutex_unlock(&game->mutex);
}

void game_move_player_random(struct game* game) {
    int x = rand() % MAP_WIDTH;
    int y = rand() % MAP_HEIGHT;

    while (game_is_wall(game, x, y) || (game_is_manzanita(game, x, y, -1) >= 0)) {
        x = rand() % MAP_WIDTH;
        y = rand() % MAP_HEIGHT;
    }

    mutex_lock(&game->mutex);
    g_erase_xy(game->player.x+MAP_X_OFFSET, game->player.y+MAP_Y_OFFSET);
    game->player.x = x;
    game->player.y = y;
    mutex_unlock(&game->mutex);
}

void game_move_manzanita_random(struct game* game, int manzanita) {
    int x = rand() % MAP_WIDTH;
    int y = rand() % MAP_HEIGHT;

    if (!game_is_wall(game, x, y)) {
        game->manzanitas[manzanita].x = x;
        game->manzanitas[manzanita].y = y;
    } else {
        game_move_manzanita_random(game, manzanita);
    }
}

