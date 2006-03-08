#ifndef LEVELS_H
#define LEVELS_H

#include "game.h"

/*---------------------------------------------------------------------------*/

const struct level_game * curr_lg(void);

int  level_replay(const char *);
void level_play_single(const char *);
void level_play(const struct level *, int);
int  level_play_go(void);
void level_next(void);

void level_stop(int, int, int, int);

int  count_extra_balls(int, int);

void level_update_player_name(void);

/*---------------------------------------------------------------------------*/

#endif
