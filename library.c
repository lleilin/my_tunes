#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "library.h"
#include "song.h"

struct song *find_alpha(struct library *playlist, struct song *new_song) {
   char i;
    for(i = 0; i < 27; i++) {
        if((i+'A') == toupper(new_song->artist[0])) {
            return playlist->lib+i;
        }
    }
    //should never get here
    return NULL;
}

struct library *make_library() {
    struct library *out = malloc(sizeof(struct library));
    return out;
}

struct library *add_lib_song(struct library *playlist, struct song *new_song) {
    struct song *tmp = find_alpha(playlist,new_song);
    insert_order(tmp,new_song->artist,new_song->name);
    return playlist;
}

struct song *find_lib_song(struct library *playlist, char *artist, char *name) {
    struct song *to_find = make_song(artist,name);
    struct song *tmp = find_alpha(playlist,to_find);
    struct song *out = find_song(tmp,artist,name);
    free_all(to_find);
    return out;
}

struct song *find_artist(struct library *playlist, char *artist) {
    struct song *to_find = make_song(artist,song);
    struct song *tmp = find_alpha(playlist,to_find);
    struct song *out = find_artist(tmp,artist);
    free_all(to_find);
    return out;
}

void print_alpha(struct library *playlist, char letter) {
    print_all(playlist->lib[toupper(i)-'A']);
}

void print_artist(struct library *playlist, char *artist);
void print_library(struct library *playlist);
void print_random(struct library *playlist);
void print_shuffle(struct library *playlist, int n);
struct library *remove_lib_song(struct library *playlist, char *artist, char *name);
struct library *free_library(struct library *playlist);
