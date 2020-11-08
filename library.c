#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include "library.h"
#include "song.h"

struct library *make_playlist() {
  struct library *new_playlist = malloc(sizeof(struct library));
  int i;
  for (i = 0; i < 27; i++) {
    new_playlist->lib[i] = make_song("","");
  }

  return new_playlist;
}

struct song *find_lib_alpha(struct library *playlist, char *artist) {
  int first = toupper(artist[0]);
  int temp = first - 'A';
  if (temp >= 0 && temp < 26) {
    return (playlist->lib)[temp];
  } else {
    return (playlist->lib)[26];
  }
}

struct library *add_lib_song(struct library *playlist, char *artist, char *name) {
    struct song *temp = find_lib_alpha(playlist,artist);
    insert_order(temp,artist,name);
    return playlist;
}
struct song *find_lib_song(struct library *playlist, char *artist, char *name) {
    struct song *temp = find_lib_alpha(playlist, artist);
    find_song(temp, artist, name);
    free_all(temp);
}
struct song *find_artist(struct library *playlist, char *artist) {
    struct song *temp = find_lib_alpha(playlist, artist);
    first_song(temp, artist);
    free_all;
}

void print_alpha(struct library *playlist, char letter) {
  print_all((playlist->lib)[toupper(letter) - 'A']);
}

void print_artist(struct library *playlist, char *artist) {
    struct song *temp = find_artist(playlist, artist);
    while(temp) {
      if (!(strcmp(artist, temp->artist))) {
        print_song(temp);
      }
      temp = temp->next;
    }
}

void print_library(struct library *playlist) {
  int i;
  printf("Artist:\t\t\tSong:\n");
  for (i = 0; i < 27; i++) {
    if ((playlist->lib)[i]) {
      printf("%c", i + 'A');
      print_all((playlist->lib)[i]);
    }
  }
};

void print_random(struct library *playlist);
void print_shuffle(struct library *playlist, int n);
int lib_length(struct library *playlist);
struct library *remove_lib_song(struct library *playlist, char *artist, char *name);

struct library *free_library(struct library *playlist) {
  int i;
  for (i = 0; i < 27; i++) {
    free_all((playlist->lib)[i]);
  }
  free(playlist);
}
