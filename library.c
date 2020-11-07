#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include "library.h"
#include "song.h"

struct song *find_alpha(struct library *playlist, char* c) {
    char i;
    for(i = 0; i < 27; i++) {
        if((i+'A') == toupper(c[0])) {
            return playlist->lib+i;
        }
    }
    //should never get here
    return NULL;
}

struct library *make_library() {
    struct library *out = calloc(1, sizeof(struct library));
    return out;
}

struct library *add_lib_song(struct library *playlist, char *artist, char *name) {
    struct song *tmp = find_alpha(playlist,artist);
    insert_order(tmp,artist,name);
    return playlist;
}

struct song *find_lib_song(struct library *playlist, char *artist, char *name) {
    struct song *tmp = find_alpha(playlist,artist);
    struct song *out = find_song(tmp,artist,name);
    return out;
}

struct song *find_artist(struct library *playlist, char *artist) {
    struct song *tmp = find_alpha(playlist,artist);
    struct song *out = first_song(tmp,artist);
    return out;
}

void print_alpha(struct library *playlist, char letter) {
    print_all(playlist->lib+toupper(letter)-'A');
}

void print_artist(struct library *playlist, char *artist) {
    struct song *cur = find_artist(playlist, artist);
    while (!strcmp(cur -> artist, artist)) {
      print_song(cur);
      cur = cur->next;
    }
}

void print_library(struct library *playlist) {
    int i;
    for (i = 0; i < 27; i++) {
      if ((playlist->lib)[i] == NULL) {
        print_all(playlist->lib + i);
      }
    }
}

void print_random(struct library *playlist) {
    // srand(time(NULL));
    // int num = rand() % list_length(head);
    // int count = 0;
    // while(count < num) {
    //   count++;
    //   current = current->next;
    // }
    // return current;
}

void print_shuffle(struct library *playlist, int n);
struct library *remove_lib_song(struct library *playlist, char *artist, char *name);
struct library *free_library(struct library *playlist);
