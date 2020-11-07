#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include "library.h"
#include "song.h"

struct library *make_library();
struct library *add_lib_song(struct library *playlist, char *artist, char *name);
struct song *find_lib_song(struct library *playlist, char *artist, char *name);
struct song *find_artist(struct library *playlist, char *artist);
void print_alpha(struct library *playlist, char letter);
void print_artist(struct library *playlist, char *artist);
void print_library(struct library *playlist);
void print_random(struct library *playlist);
void print_shuffle(struct library *playlist, int n);
int lib_length(struct library *playlist);
struct library *remove_lib_song(struct library *playlist, char *artist, char *name);
struct library *free_library(struct library *playlist);
