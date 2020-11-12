#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include "library.h"
#include "song.h"

struct library *make_playlist() {
  struct library *new_playlist = malloc(sizeof(struct library));

  new_playlist->size = 0;

  int i;
  for (i = 0; i < 27; i++) {
    new_playlist->lib[i] = NULL;
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
    playlist->size++;

    struct song *temp = find_lib_alpha(playlist,artist);
    int tmp = artist[0]-'A';
    if(tmp > 26 || tmp < 0) {
        tmp = 26;
    }

    playlist->lib[tmp] = insert_order(playlist->lib[tmp],artist,name);
    return playlist;
}

struct song *find_lib_song(struct library *playlist, char *artist, char *name) {
    struct song *temp = find_lib_alpha(playlist, artist);
    find_song(temp, artist, name);
}
struct song *find_artist(struct library *playlist, char *artist) {
    struct song *temp = find_lib_alpha(playlist, artist);
    first_song(temp, artist);
}

void print_alpha(struct library *playlist, char letter) {
  int first = toupper(letter);
  int temp = first - 'A';
  if (temp >= 0 && temp < 26) {
    print_all((playlist->lib)[temp]);
  } else {
    print_all((playlist->lib)[26]);
  }
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
  printf("\n%-24s%-24s\n", "Artist", "Song");
  printf("--------------------------------\n");
  int i;
  for (i = 0; i < 27; i++) {
      print_all((playlist->lib)[i]);
  }
}

//helper
struct song *find_song_ind(struct library *playlist,int to_get){
    int i;
    int c = 0;
    struct song *cur;
    for(i = 0; i < 27; i++) {
        cur = playlist->lib[i];
        while(cur) {
            if(c == to_get) {
                return cur;
            }
            c++;
            cur = cur->next;
        }
    }
    //should never get here
    return NULL;
}

void print_random(struct library *playlist) {
    srand(time(NULL)-10);
    print_song(find_song_ind(playlist,(rand())%playlist->size));
}

void print_shuffle(struct library *playlist, int n) {
    srand(time(NULL));
    int i;
    for(i = 0; i < n; i++) {
        print_song(find_song_ind(playlist,rand()%playlist->size));
    }
}

struct library *remove_lib_song(struct library *playlist, char *artist, char *name) {
    struct song *cur = find_lib_alpha(playlist, artist);
    int first = toupper(artist[0]);
    int temp = first - 'A';
    if (temp >= 0 && temp < 26) {
      (playlist->lib)[temp] = remove_song(cur,artist,name);
    } else {
      (playlist->lib)[26] = remove_song(cur,artist,name);
    }
    int i;
    playlist->size = 0;
    for (i = 0; i<27; i++) {
      playlist->size += list_length(playlist->lib[i]);
    }
    return playlist;
}

struct library *free_library(struct library *playlist) {
  int i;
  for (i = 0; i < 27; i++) {
    free_all((playlist->lib)[i]);
  }
  free(playlist);
}
