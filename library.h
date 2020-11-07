#ifndef LIBRARY_H
#define LIBRARY_H

#include "song.h"

struct library {
   struct song lib[27];
};

struct library *make_library();
struct library *add_lib_song(struct library *playlist, char *artist, char *name);
struct song *find_lib_song(struct library *playlist, char *artist, char *name);
struct song *find_artist(struct library *playlist, char *artist);
void print_alpha(struct library *playlist, char letter);
void print_artist(struct library *playlist, char *artist);
void print_library(struct library *playlist);
void print_random(struct library *playlist);
void print_shuffle(struct library *playlist, int n);
struct library *remove_lib_song(struct library *playlist, char *artist, char *name);
struct library *free_library(struct library *playlist);

#endif
